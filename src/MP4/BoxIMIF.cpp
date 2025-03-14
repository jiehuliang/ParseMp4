#include "BoxIMIF.h"


IMIF::IMIF() {
	this->_type = "imif";
}

std::string IMIF::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void IMIF::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}