#ifndef BOX_SDTP_H
#define BOX_SDTP_H
#include "DataBox.h"

class SDTP : public DataBox{
public:


    SDTP();
    ~SDTP() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_SDTP_H	
