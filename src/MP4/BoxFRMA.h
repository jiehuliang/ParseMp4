#ifndef BOX_FRMA_H
#define BOX_FRMA_H
#include "DataBox.h"

class FRMA : public DataBox{
public:


    FRMA();
    ~FRMA() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_FRMA_H	
