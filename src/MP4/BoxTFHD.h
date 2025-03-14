#ifndef BOX_TFHD_H
#define BOX_TFHD_H
#include "DataBox.h"

class TFHD : public DataBox{
public:


    TFHD();
    ~TFHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_TFHD_H	
