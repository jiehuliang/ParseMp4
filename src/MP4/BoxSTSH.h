#ifndef BOX_STSH_H
#define BOX_STSH_H
#include "DataBox.h"

class STSH : public DataBox{
public:


    STSH();
    ~STSH() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_STSH_H	
