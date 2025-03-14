#include "BoxHDLR.h"


HDLR::HDLR() {
	this->_type = "hdlr";
}

std::string HDLR::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void HDLR::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}