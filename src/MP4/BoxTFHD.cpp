#include "BoxTFHD.h"


TFHD::TFHD() {
	this->_type = "tfhd";
}

std::string TFHD::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void TFHD::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}