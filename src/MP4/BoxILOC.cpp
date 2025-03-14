#include "BoxILOC.h"


ILOC::ILOC() {
	this->_type = "iloc";
}

std::string ILOC::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void ILOC::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}