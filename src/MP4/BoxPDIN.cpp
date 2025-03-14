#include "BoxPDIN.h"


PDIN::PDIN() {
	this->_type = "pdin";
}

std::string PDIN::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void PDIN::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}