#ifndef BOX_TREX_H
#define BOX_TREX_H
#include "DataBox.h"

class TREX : public DataBox{
public:


    TREX();
    ~TREX() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_TREX_H	
