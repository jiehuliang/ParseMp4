#include "BoxSBGP.h"


SBGP::SBGP() {
	this->_type = "sbgp";
}

std::string SBGP::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void SBGP::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}