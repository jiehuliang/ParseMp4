#ifndef BOX_TFRA_H
#define BOX_TFRA_H
#include "DataBox.h"

class TFRA : public DataBox{
public:


    TFRA();
    ~TFRA() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_TFRA_H	
