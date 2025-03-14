#ifndef BOX_SUBS_H
#define BOX_SUBS_H
#include "DataBox.h"

class SUBS : public DataBox{
public:


    SUBS();
    ~SUBS() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_SUBS_H	
