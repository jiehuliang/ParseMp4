#ifndef MP4_H
#define MP4_H

#include "MP4Buffer.h"
#include "FileBox.h"
#include <memory>

class MP4 {
public:

protected:
	std::shared_ptr<MP4Buffer> _stream;
	std::shared_ptr<FileBox> root;
private:
};

#endif //MP4_H