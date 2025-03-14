#ifndef BOX_STCO_H
#define BOX_STCO_H
#include "DataBox.h"

class STCO : public DataBox{
public:


    STCO();
    ~STCO() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STCO_H	
