#include "MP4Buffer.h"
#include <assert.h>

MP4Buffer::MP4Buffer() : Buffer(){}

std::shared_ptr<MP4Buffer> MP4Buffer::RetrieveAsMP4Buffer(size_t len) {
	auto buf = RetrieveAsString(len);
	auto mp4buf = std::make_shared<MP4Buffer>();
	mp4buf->Append(buf);
    return mp4buf;
}

uint32_t MP4Buffer::ReadUint32BigEndian() {
	const char* c = RetrieveAsString(4).c_str();
	uint32_t n = static_cast<uint8_t>(c[0]) << 24
		| static_cast<uint8_t>(c[1]) << 16
		| static_cast<uint8_t>(c[2]) << 8
		| static_cast<uint8_t>(c[3]);
	return n;
}

uint64_t MP4Buffer::ReadUint64BigEndian() {
	const char* c = RetrieveAsString(8).c_str();
	uint64_t n = static_cast<uint8_t>(c[0]) << 56
		| static_cast<uint8_t>(c[1]) << 48
		| static_cast<uint8_t>(c[2]) << 40
		| static_cast<uint8_t>(c[3]) << 32
		| static_cast<uint8_t>(c[4]) << 24
		| static_cast<uint8_t>(c[5]) << 16
		| static_cast<uint8_t>(c[6]) << 8
		| static_cast<uint8_t>(c[7]);
	return n;
}