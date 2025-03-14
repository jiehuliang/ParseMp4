#include "BoxMFHD.h"


MFHD::MFHD() {
	this->_type = "mfhd";
}

std::string MFHD::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void MFHD::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}