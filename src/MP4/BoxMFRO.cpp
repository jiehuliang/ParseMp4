#include "BoxMFRO.h"


MFRO::MFRO() {
	this->_type = "mfro";
}

std::string MFRO::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void MFRO::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}