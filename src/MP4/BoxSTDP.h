#ifndef BOX_STDP_H
#define BOX_STDP_H
#include "DataBox.h"

class STDP : public DataBox{
public:


    STDP();
    ~STDP() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STDP_H	
