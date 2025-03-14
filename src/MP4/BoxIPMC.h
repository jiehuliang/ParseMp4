#ifndef BOX_IPMC_H
#define BOX_IPMC_H
#include "DataBox.h"

class IPMC : public DataBox{
public:


    IPMC();
    ~IPMC() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_IPMC_H	
