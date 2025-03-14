#ifndef BOX_STZ2_H
#define BOX_STZ2_H
#include "DataBox.h"

class STZ2 : public DataBox{
public:


    STZ2();
    ~STZ2() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STZ2_H	
