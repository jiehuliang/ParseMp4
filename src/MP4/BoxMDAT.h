#ifndef BOX_MDAT_H
#define BOX_MDAT_H
#include "DataBox.h"

class MDAT : public DataBox{
public:


    MDAT();
    ~MDAT() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_MDAT_H	
