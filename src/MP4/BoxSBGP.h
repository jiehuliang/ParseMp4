#ifndef BOX_SBGP_H
#define BOX_SBGP_H
#include "DataBox.h"

class SBGP : public DataBox{
public:


    SBGP();
    ~SBGP() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_SBGP_H	
