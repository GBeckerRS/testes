#include	"excessao.h"

Excessao::Excessao(const char* texto)
{
    this->_text = new char[std::strlen(texto)+1];
    std::strcpy(this->_text,texto);
}

Excessao::Excessao(const Excessao& ex)
{
    this->_text = new char[std::strlen(ex._text)+1];
    std::strcpy(this->_text,ex._text);
}

Excessao::~Excessao() throw()
{
    delete[] this->_text;
    this->_text = NULL;
}

const char* Excessao::what()
{
    return _text;
}
