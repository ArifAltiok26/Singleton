#pragma once

namespace YGV{
    template<typename WrappedClass>
    class Singleton{
        static WrappedClass* instance;
        public:
        
        template<typename ...Args>
        static WrappedClass* getInstance(Args... args);
    };

    template<typename WrappedClass>
    template<typename ...Args>
    WrappedClass* Singleton<WrappedClass>::getInstance(Args... args){
        static WrappedClass* instance;
        if(instance == nullptr){
            instance = new WrappedClass(args...);
        }
        return instance;
    }
}
