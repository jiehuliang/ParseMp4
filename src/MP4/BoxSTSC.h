#ifndef BOX_STSC_H
#define BOX_STSC_H
#include "DataBox.h"

class STSC : public DataBox{
public:


    STSC();
    ~STSC() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STSC_H	
