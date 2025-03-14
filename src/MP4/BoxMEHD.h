#ifndef BOX_MEHD_H
#define BOX_MEHD_H
#include "DataBox.h"

class MEHD : public DataBox{
public:


    MEHD();
    ~MEHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_MEHD_H	
