#ifndef BOX_CTTS_H
#define BOX_CTTS_H
#include "DataBox.h"

class CTTS : public DataBox{
public:


    CTTS();
    ~CTTS() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:
};



#endif //BOX_CTTS_H	
