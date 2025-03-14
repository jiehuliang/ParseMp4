#ifndef BOX_TKHD_H
#define BOX_TKHD_H
#include "DataBox.h"

class TKHD : public DataBox{
public:


    TKHD();
    ~TKHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_TKHD_H	
