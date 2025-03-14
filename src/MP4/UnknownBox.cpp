#include "UnknownBox.h"

UnknownBox::UnknownBox() {
	this->_type = "unknown";
}

std::string UnknownBox::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void UnknownBox::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}