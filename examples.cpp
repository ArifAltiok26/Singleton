#include <iostream>
#include "singleton.h"
using namespace YGV;

class Foo{
    public:
    void whoAreYou()const{
        std::cout << "I am foo class." << std::endl;
    }
};

class Bar{
    public:
    Bar(const std::string& somethings){
        std::cout   << "I am constructor of bar class. I am public. "
                    << "My parameter is somethings and value of parameter = " << somethings << "." << std::endl;
    }
    void whoAreYou()const{
        std::cout << "I am bar class." << std::endl;
    }
};

class Zoo{
    Zoo(){
       std::cout   << "I am constructor of zoo class. I am private, "
                   << "but I am friend with Singleton class. " << std::endl;
    }
    public:
    void whoAreYou()const{
        std::cout << "I am zoo class." << std::endl;
    }

    friend Singleton<Zoo>;
};


int main(int argc,char** argv){
    Singleton<Foo>::getInstance()->whoAreYou();
    Singleton<Bar>::getInstance("Dummy parameter")->whoAreYou();
    Singleton<Zoo>::getInstance()->whoAreYou();
    
    return 0;
}