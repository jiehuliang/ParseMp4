#ifndef BOX_SMHD_H
#define BOX_SMHD_H
#include "DataBox.h"

class SMHD : public DataBox{
public:


    SMHD();
    ~SMHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_SMHD_H	
