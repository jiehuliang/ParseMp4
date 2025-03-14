#include "BoxPITM.h"


PITM::PITM() {
	this->_type = "pitm";
}

std::string PITM::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void PITM::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}