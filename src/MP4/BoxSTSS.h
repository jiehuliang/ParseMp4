#ifndef BOX_STSS_H
#define BOX_STSS_H
#include "DataBox.h"

class STSS : public DataBox{
public:


    STSS();
    ~STSS() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STSS_H	
