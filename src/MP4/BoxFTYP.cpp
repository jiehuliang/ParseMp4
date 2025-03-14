#include "BoxFTYP.h"


FTYP::FTYP() {
	this->_type = "ftyp";
}

std::string FTYP::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void FTYP::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}