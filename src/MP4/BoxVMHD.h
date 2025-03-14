#ifndef BOX_VMHD_H
#define BOX_VMHD_H
#include "DataBox.h"

class VMHD : public DataBox{
public:


    VMHD();
    ~VMHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_VMHD_H	
