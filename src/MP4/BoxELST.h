#ifndef BOX_ELST_H
#define BOX_ELST_H
#include "DataBox.h"

class ELST : public DataBox{
public:


    ELST();
    ~ELST() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_ELST_H	
