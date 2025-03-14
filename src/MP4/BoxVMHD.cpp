#include "BoxVMHD.h"


VMHD::VMHD() {
	this->_type = "vmhd";
}

std::string VMHD::dumpStr() {
    std::ostringstream o;

    o << "MP4 Atom:           " << this->_type << "\n";

    return o.str();
}

void VMHD::processData(const MP4Buffer::Ptr& stream, size_t len) {
    _data = stream;
    _dataLen = len;
	stream->Retrieve(len);
}