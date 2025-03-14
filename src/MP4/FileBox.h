#ifndef FILE_BOX_H
#define FILE_BOX_H

#include "ContainerBox.h"
#include "BoxFactory.h"

class FileBox : public ContainerBox  {
public:
	using Ptr = std::shared_ptr<FileBox>;
	FileBox() :ContainerBox("") {}
	std::string dumpStr() {
		std::string s;
		s += "MP4 File:\n";
		for (auto& box : _children) {
			s.append(box.second->dumpStr());
		}
		return s;
	};
protected:

private:

};

#endif // FILE_BOX_H