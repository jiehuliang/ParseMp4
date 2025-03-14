#include "BoxTFRA.h"


TFRA::TFRA() {
	this->_type = "tfra";
}

std::string TFRA::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void TFRA::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}