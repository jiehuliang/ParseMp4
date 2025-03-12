#include "ContainerBox.h"
#include <algorithm>


ContainerBox::ContainerBox(std::string type) {
	this->_type = type;
	std::transform(this->_type.begin(), this->_type.end(), this->_type.begin(), ::toupper);
}

void ContainerBox::Parse(MP4Buffer::Ptr stream) {
	uint32_t length;
	uint64_t dataLength;
	std::string type;

	while (stream->readablebytes() != 0) {
		length = stream->ReadUint32();
		dataLength = 0;
		if (length == 1) {
			dataLength = stream->ReadUint64() - 16;
		}
		else {
			dataLength = length - 8;
		}
		type = stream->RetrieveAsString(4);
	}


}

