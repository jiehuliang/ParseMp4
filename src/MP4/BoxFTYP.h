#ifndef Box_FTYP_H
#define Box_FTYP_H
#include "DataBox.h"

class FTYP : public DataBox{
public:


    FTYP();
    ~FTYP() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //Box_FTYP_H	
