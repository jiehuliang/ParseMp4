#ifndef BOX_STTS_H
#define BOX_STTS_H
#include "DataBox.h"

class STTS : public DataBox{
public:


    STTS();
    ~STTS() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STTS_H	
