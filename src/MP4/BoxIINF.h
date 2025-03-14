#ifndef BOX_IINF_H
#define BOX_IINF_H
#include "DataBox.h"

class IINF : public DataBox{
public:


    IINF();
    ~IINF() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_IINF_H	
