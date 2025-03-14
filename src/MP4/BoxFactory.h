#ifndef BOX_FACTORY_H
#define BOX_FACTORY_H

#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <memory>
#include <mutex>

#include "BaseBox.h"
#include "ContainerBox.h"
#include "Util/common.h"
#include "MP4.h"
#include "UnknownBox.h"

class BoxFactory
{
public:
	using CreateBoxFunc = std::function<BaseBox::Ptr(const std::string&)>;

    static BoxFactory& getInstance() {
        static std::shared_ptr<BoxFactory> s_instance(new BoxFactory());
        static BoxFactory& s_instance_ref = *s_instance;
        return s_instance_ref;
    }

    DISALLOW_COPY(BoxFactory);

    BaseBox::Ptr createBox(const std::string& type) {
        if (isContainerBox(type)) {
            return std::make_shared<ContainerBox>(type);
        }
        else {
            auto it = _creators.find(type);
            if (it != _creators.end()) {
                return it->second(type);
            }
            else {
                return nullptr;
                return std::make_shared<UnknownBox>();
            }
        }
    }

    template<class T>
    void registerCreator(const std::string& type) {
        std::lock_guard<std::mutex> lock(mutex_);
        _creators[type] = [](const std::string& type) {
            return std::make_shared<T>();
        };
    }

    bool isContainerBox(const std::string& type) {
        return _containerboxTypes.count(type) > 0;
    }

protected:

private:
	std::unordered_map<std::string, CreateBoxFunc> _creators;
	
	std::unordered_set<std::string> _containerboxTypes = {
		"dinf" , "edts" , "ipro" , "mdia" , "meta" ,
		"mfra" , "minf" , "moof" , "moov" , "mvex" ,
		"sinf" , "skip" , "stbl" , "traf" , "trak"
	};

    std::mutex mutex_;

    BoxFactory() {
        // 初始化已知的Box类型
        registerCreator<BXML>("bxml");
        registerCreator<CO64>("co64");
        registerCreator<CPRT>("cprt");
        registerCreator<CTTS>("ctts");
        registerCreator<DREF>("dref");
        registerCreator<ELST>("elst");
        registerCreator<FREE>("free");
        registerCreator<FRMA>("frma");
        registerCreator<FTYP>("ftyp");
        registerCreator<HDLR>("hdlr");
        registerCreator<HMHD>("hmhd");
        registerCreator<IINF>("iinf");
        registerCreator<ILOC>("iloc");
        registerCreator<IMIF>("imif");
        registerCreator<IPMC>("ipmc");
        registerCreator<MDAT>("mdat");
        registerCreator<MDHD>("mdhd");
        registerCreator<MEHD>("mehd");
        registerCreator<MFHD>("mfhd");
        registerCreator<MFRO>("mfro");
        registerCreator<MVHD>("mvhd");
        registerCreator<PADB>("padb");
        registerCreator<PDIN>("pdin");
        registerCreator<PITM>("pitm");
        registerCreator<SBGP>("sbgp");
        registerCreator<SCHI>("schi");
        registerCreator<SCHM>("schm");
        registerCreator<SDTP>("sdtp");
        registerCreator<SGPD>("sgpd");
        registerCreator<SMHD>("smhd");
        registerCreator<SUBS>("subs");
        registerCreator<STSD>("stsd");
        registerCreator<STCO>("stco");
        registerCreator<STDP>("stdp");
        registerCreator<STSC>("stsc");
        registerCreator<STSH>("stsh");
        registerCreator<STSS>("stss");
        registerCreator<STSZ>("stsz");
        registerCreator<STTS>("stts");
        registerCreator<STZ2>("stz2");
        registerCreator<TFHD>("tfhd");
        registerCreator<TFRA>("tfra");
        registerCreator<TKHD>("tkhd");
        registerCreator<TREF>("tref");
        registerCreator<TREX>("trex");
        registerCreator<TRUN>("trun");
        registerCreator<UDTA>("udta");
        registerCreator<VMHD>("vmhd");
        registerCreator<XML>("xml");
    }
};


#endif //BOX_FACTORY_H