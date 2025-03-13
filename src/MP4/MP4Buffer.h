#ifndef MP4_BUFFER_H
#define MP4_BUFFER_H

#include "Util/Buffer.h"

class MP4Buffer : public Buffer {
public:
	using Ptr = std::shared_ptr<MP4Buffer>;

	MP4Buffer();
    ~MP4Buffer() = default;

	std::shared_ptr<MP4Buffer> RetrieveAsMP4Buffer(size_t len);

	uint32_t ReadUint32BigEndian();
	uint64_t ReadUint64BigEndian();
};


#endif //MP4_BUFFER_H