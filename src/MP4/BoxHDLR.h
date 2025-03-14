#ifndef BOX_HDLR_H
#define BOX_HDLR_H
#include "DataBox.h"

class HDLR : public DataBox{
public:


    HDLR();
    ~HDLR() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_HDLR_H	
