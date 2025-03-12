#ifndef BASE_BOX_H
#define BASE_BOX_H

#include <string>
#include <memory>

class BaseBox
{
public:
	using Ptr = std::shared_ptr<BaseBox>;

	virtual ~BaseBox() = default;

	std::string getType() {
		return _type;
	}

	virtual std::string dumpStr() = 0;

protected:
	BaseBox::Ptr _parent;
	std::string _type;

private:


};

#endif //BASE_BOX_H