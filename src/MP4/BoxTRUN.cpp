#include "BoxTRUN.h"


TRUN::TRUN() {
	this->_type = "trun";
}

std::string TRUN::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void TRUN::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}