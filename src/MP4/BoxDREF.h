#ifndef BOX_DREF_H
#define BOX_DREF_H
#include "DataBox.h"

class DREF : public DataBox{
public:


    DREF();
    ~DREF() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:
};



#endif //BOX_DREF_H	
