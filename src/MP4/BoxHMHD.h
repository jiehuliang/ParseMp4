#ifndef BOX_HMHD_H
#define BOX_HMHD_H
#include "DataBox.h"

class HMHD : public DataBox{
public:


    HMHD();
    ~HMHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_HMHD_H	
