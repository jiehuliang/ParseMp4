#include "BoxMVHD.h"


MVHD::MVHD() {
	this->_type = "mvhd";
}

std::string MVHD::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void MVHD::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}