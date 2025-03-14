#ifndef BOX_XML_H
#define BOX_XML_H
#include "DataBox.h"

class XML : public DataBox{
public:


    XML();
    ~XML() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_XML_H	
