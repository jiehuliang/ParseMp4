#include "BoxMDAT.h"


MDAT::MDAT() {
	this->_type = "mdat";
}

std::string MDAT::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << " ,len:" << _dataLen << "\n";

    return o.str();
}

void MDAT::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}