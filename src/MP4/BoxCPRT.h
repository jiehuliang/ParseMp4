#ifndef BOX_CPRT_H
#define BOX_CPRT_H
#include "DataBox.h"

class CPRT : public DataBox{
public:


    CPRT();
    ~CPRT() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:
};



#endif //BOX_CPRT_H	
