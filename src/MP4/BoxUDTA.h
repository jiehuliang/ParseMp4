#ifndef BOX_UDTA_H
#define BOX_UDTA_H
#include "DataBox.h"

class UDTA : public DataBox{
public:


    UDTA();
    ~UDTA() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_UDTA_H	
