#ifndef BOX_PITM_H
#define BOX_PITM_H
#include "DataBox.h"

class PITM : public DataBox{
public:


    PITM();
    ~PITM() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:
};



#endif //BOX_PITM_H	
