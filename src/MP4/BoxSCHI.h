#ifndef BOX_SCHI_H
#define BOX_SCHI_H
#include "DataBox.h"

class SCHI : public DataBox{
public:


    SCHI();
    ~SCHI() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_SCHI_H	
