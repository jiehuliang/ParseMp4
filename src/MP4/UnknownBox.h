#ifndef UNKNOWN_BOX_H
#define UNKNOWN_BOX_H
#include "DataBox.h"

class UnknownBox : public DataBox {
public:


    UnknownBox();
    ~UnknownBox() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //UNKNOWN_BOX_H	
