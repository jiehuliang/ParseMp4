#ifndef BOX_TREF_H
#define BOX_TREF_H
#include "DataBox.h"

class TREF : public DataBox{
public:


    TREF();
    ~TREF() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_TREF_H	
