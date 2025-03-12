#ifndef MP4_BUFFER_H
#define MP4_BUFFER_H

#include "Util/Buffer.h"

class MP4Buffer : public Buffer {
public:
	using Ptr = std::shared_ptr<MP4Buffer>;

	MP4Buffer();
    ~MP4Buffer() = default;

	uint32_t ReadUint32();
	uint64_t ReadUint64();
};


#endif //MP4_BUFFER_H