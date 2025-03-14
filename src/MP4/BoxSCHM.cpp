#include "BoxSCHM.h"


SCHM::SCHM() {
	this->_type = "schm";
}

std::string SCHM::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void SCHM::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}