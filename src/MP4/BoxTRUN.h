#ifndef BOX_TRUN_H
#define BOX_TRUN_H
#include "DataBox.h"

class TRUN : public DataBox{
public:


    TRUN();
    ~TRUN() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_TRUN_H	
