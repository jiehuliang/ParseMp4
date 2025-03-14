#include "ContainerBox.h"
#include <algorithm>

#include "BoxFactory.h"
#include "DataBox.h"



ContainerBox::ContainerBox(std::string type) {
	this->_type = type;
	std::transform(this->_type.begin(), this->_type.end(), this->_type.begin(), ::toupper);
}

void ContainerBox::Parse(MP4Buffer::Ptr stream) {
	uint32_t length;
	uint64_t dataLength;
	std::string type;

	while (stream->readablebytes() != 0) {
		length = stream->ReadUint32BigEndian();
		dataLength = 0;
		if (length == 1) {
			dataLength = stream->ReadUint64BigEndian() - 16;
		}
		else {
			dataLength = length - 8;
		}
		type = stream->RetrieveAsString(4);

		BoxFactory& factory = BoxFactory::getInstance();
		BaseBox::Ptr Box = factory.createBox(type);
		auto subStream = stream->RetrieveAsMP4Buffer(dataLength);
		/* Container Box */
        if (factory.isContainerBox(type)) {
			
			std::dynamic_pointer_cast<ContainerBox>(Box)->Parse(subStream);
		}
		else {
			std::dynamic_pointer_cast<DataBox>(Box)->processData(subStream, dataLength);
		}
		addChildrenBox(Box);
	}
}

void ContainerBox::addChildrenBox(const BaseBox::Ptr& box) {
	_children.insert(std::pair<std::string, BaseBox::Ptr>(box->getType(),box));
}

std::string ContainerBox::dumpStr() {
	std::string s;
	s += "MP4 Container Atom: " + this->_type + "\n";
	for (auto& box : _children) {
		s += block;
		s.append(box.second->dumpStr());
	}
	return s;
}

