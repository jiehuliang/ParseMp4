#ifndef BOX_STSZ_H
#define BOX_STSZ_H
#include "DataBox.h"

class STSZ : public DataBox{
public:


    STSZ();
    ~STSZ() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STSZ_H	
