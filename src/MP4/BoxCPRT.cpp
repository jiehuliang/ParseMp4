#include "BoxCPRT.h"


CPRT::CPRT() {
	this->_type = "cprt";
}

std::string CPRT::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void CPRT::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}