#ifndef Box_ILOC_H
#define Box_ILOC_H
#include "DataBox.h"

class ILOC : public DataBox{
public:


    ILOC();
    ~ILOC() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //Box_ILOC_H	
