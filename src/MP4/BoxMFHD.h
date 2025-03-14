#ifndef BOX_MFHD_H
#define BOX_MFHD_H
#include "DataBox.h"

class MFHD : public DataBox{
public:


    MFHD();
    ~MFHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_MFHD_H	
