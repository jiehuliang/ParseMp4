#include "BoxSDTP.h"


SDTP::SDTP() {
	this->_type = "sdtp";
}

std::string SDTP::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void SDTP::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}