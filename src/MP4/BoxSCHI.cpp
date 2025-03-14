#include "BoxSCHI.h"


SCHI::SCHI() {
	this->_type = "schi";
}

std::string SCHI::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void SCHI::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}