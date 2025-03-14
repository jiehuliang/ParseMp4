#ifndef BOX_PADB_H
#define BOX_PADB_H
#include "DataBox.h"

class PADB : public DataBox{
public:


    PADB();
    ~PADB() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_PADB_H	
