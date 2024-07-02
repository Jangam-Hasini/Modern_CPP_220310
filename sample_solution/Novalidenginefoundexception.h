#ifndef NOVALIDENGINEFOUNDEXCEPTION_H
#define NOVALIDENGINEFOUNDEXCEPTION_H
#include <stdexcept>

class Novalidenginefoundexception
{
private:
    std::string _msg;
public:
    Novalidenginefoundexception(std::string msg) : _msg{msg} {}

  Novalidenginefoundexception()=delete;
     Novalidenginefoundexception(const Novalidenginefoundexception&)=default;
     Novalidenginefoundexception& operator=(const Novalidenginefoundexception&)=delete;
     Novalidenginefoundexception& operator=(Novalidenginefoundexception&&)=delete;
     Novalidenginefoundexception(Novalidenginefoundexception&&)=delete;
     ~Novalidenginefoundexception()=default;
};



#endif // NOVALIDENGINEFOUNDEXCEPTION_H
