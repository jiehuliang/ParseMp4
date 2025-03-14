#include "BoxSUBS.h"


SUBS::SUBS() {
	this->_type = "subs";
}

std::string SUBS::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void SUBS::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}