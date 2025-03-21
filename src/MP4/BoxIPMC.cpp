#include "BoxIPMC.h"


IPMC::IPMC() {
	this->_type = "ipmc";
}

std::string IPMC::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void IPMC::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}