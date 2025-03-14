#include "BoxSTZ2.h"


STZ2::STZ2() {
	this->_type = "stz2";
}

std::string STZ2::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void STZ2::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}