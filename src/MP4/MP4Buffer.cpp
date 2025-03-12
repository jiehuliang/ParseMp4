#include "MP4Buffer.h"


MP4Buffer::MP4Buffer() : Buffer(){}

uint32_t MP4Buffer::ReadUint32() {
	return static_cast<uint32_t>(*RetrieveAsString(4).c_str());
}

uint64_t MP4Buffer::ReadUint64() {
	return static_cast<uint64_t>(*RetrieveAsString(8).c_str());
}