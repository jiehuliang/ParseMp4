#ifndef BOX_MDHD_H
#define BOX_MDHD_H
#include "DataBox.h"

class MDHD : public DataBox{
public:


    MDHD();
    ~MDHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_MDHD_H	
