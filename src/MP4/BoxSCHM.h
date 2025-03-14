#ifndef BOX_SCHM_H
#define BOX_SCHM_H
#include "DataBox.h"

class SCHM : public DataBox{
public:


    SCHM();
    ~SCHM() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_SCHM_H	
