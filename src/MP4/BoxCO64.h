#ifndef BOX_CO64_H
#define BOX_CO64_H
#include "DataBox.h"

class CO64 : public DataBox{
public:


    CO64();
    ~CO64() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:
};



#endif //BOX_CO64_H	
