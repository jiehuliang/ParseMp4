#ifndef BOX_FREE_H
#define BOX_FREE_H
#include "DataBox.h"

class FREE : public DataBox{
public:


    FREE();
    ~FREE() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_FREE_H	
