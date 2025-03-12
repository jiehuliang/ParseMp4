#ifndef FILE_BOX_H
#define FILE_BOX_H

#include "ContainerBox.h"

class FileBox : public ContainerBox  {
public:
	using Ptr = std::shared_ptr<FileBox>;
	FileBox() :ContainerBox("") {}
	std::string dumpStr() override { return nullptr; };
protected:

private:

};

#endif // FILE_BOX_H