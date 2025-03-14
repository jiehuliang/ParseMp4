#include "BoxHMHD.h"


HMHD::HMHD() {
	this->_type = "hmhd";
}

std::string HMHD::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void HMHD::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}