#include "ContainerBox.h"
#include <algorithm>

#include "BoxFactory.h"


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
		auto Box = factory.createBox(type);

		/* Container Box */
        if (factory.isContainerBox(type)) {
			auto containerStream = stream->RetrieveAsMP4Buffer(dataLength);
			std::dynamic_pointer_cast<ContainerBox>(Box)->Parse(containerStream);
		}
		else {
			
		}
		addChildrenBox(Box);
	}
}

void ContainerBox::addChildrenBox(const BaseBox::Ptr& box) {
	_children.insert(std::pair<std::string, BaseBox::Ptr>(box->getType(),box));
}

