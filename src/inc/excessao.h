#ifndef		SRC_INC_EXCESSAO_H
#define		SRC_INC_EXCESSAO_H

#include	<exception>
#include    <cstring>

class Excessao: public std::exception
{
public:
    Excessao(const char* texto);
    Excessao(const Excessao& ex);

    ~Excessao() throw();
    const char* what();

private:
    char* _text;
};
#endif		// SRC_INC_EXCESSAO_H

