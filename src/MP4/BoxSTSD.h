#ifndef BOX_STSD_H
#define BOX_STSD_H
#include "DataBox.h"

class STSD : public DataBox{
public:


    STSD();
    ~STSD() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STSD_H	
