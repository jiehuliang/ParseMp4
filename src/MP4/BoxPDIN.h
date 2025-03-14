#ifndef BOX_PDIN_H
#define BOX_PDIN_H
#include "DataBox.h"

class PDIN : public DataBox{
public:


    PDIN();
    ~PDIN() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_PDIN_H	
