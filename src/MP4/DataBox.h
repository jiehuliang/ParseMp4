#ifndef DATA_BOX_H
#define DATA_BOX_H
#include "BaseBox.h"
#include "MP4Buffer.h"
#include <sstream>


class DataBox : public BaseBox {
public:
    using Ptr = std::shared_ptr<DataBox>;
    virtual ~DataBox() = default;
    virtual std::string dumpStr() = 0;
    virtual void processData(const MP4Buffer::Ptr& stream, size_t len) = 0;
protected:
    MP4Buffer::Ptr _data;
    size_t _dataLen;
private:
};

#endif //DATA_BOX_H