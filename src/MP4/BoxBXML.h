#ifndef MP4_BXML_H
#define MP4_BXML_H
#include "DataBox.h"

class BXML : public DataBox {
public:


    BXML();
    ~BXML() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;
protected:

private:
    
};



#endif //MP4_BXML_H	
