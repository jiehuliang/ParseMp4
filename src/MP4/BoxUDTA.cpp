#include "BoxUDTA.h"


UDTA::UDTA() {
	this->_type = "udta";
}

std::string UDTA::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void UDTA::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}