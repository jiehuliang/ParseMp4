#ifndef BOX_SGPD_H
#define BOX_SGPD_H
#include "DataBox.h"

class SGPD : public DataBox{
public:


    SGPD();
    ~SGPD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_SGPD_H	
