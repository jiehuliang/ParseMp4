#ifndef BOX_MFRO_H
#define BOX_MFRO_H
#include "DataBox.h"

class MFRO : public DataBox{
public:


    MFRO();
    ~MFRO() = default;

    std::string dumpStr() override;
    void processData(const MP4Buffer::Ptr& stream, size_t len) override;

protected:

private:

};



#endif //BOX_MFRO_H	
