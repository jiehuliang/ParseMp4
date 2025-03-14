#include "BoxFRMA.h"


FRMA::FRMA() {
	this->_type = "frma";
}

std::string FRMA::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void FRMA::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}