#ifndef BOX_MVHD_H
#define BOX_MVHD_H
#include "DataBox.h"

class MVHD : public DataBox{
public:


    MVHD();
    ~MVHD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_MVHD_H	
