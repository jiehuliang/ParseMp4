#include "BoxCTTS.h"


CTTS::CTTS() {
	this->_type = "ctts";
}

std::string CTTS::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void CTTS::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}