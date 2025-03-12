#ifndef CONTAINER_BOX_H
#define CONTAINER_BOX_H

#include "BaseBox.h"
#include "MP4Buffer.h"
#include <map>

class ContainerBox : public BaseBox{
public:
	using Ptr = std::shared_ptr<ContainerBox>;
    ContainerBox(std::string type);
	virtual ~ContainerBox() = default;
	virtual std::string dumpStr() override { return nullptr; };

	void Parse(MP4Buffer::Ptr stream);
protected:
	std::multimap<std::string, BaseBox::Ptr> _children;
private:

};


#endif //CONTAINER_BOX_H