#ifndef BOX_IMIF_H
#define BOX_IMIF_H
#include "DataBox.h"

class IMIF : public DataBox{
public:


    IMIF();
    ~IMIF() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_IMIF_H	
