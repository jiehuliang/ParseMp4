#include "BoxSTSZ.h"


STSZ::STSZ() {
	this->_type = "stsz";
}

std::string STSZ::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void STSZ::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}