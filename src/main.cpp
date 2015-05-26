#include    <iostream>

#include    "inc/excessao.h"

int main(void)
{

    try
    {
        throw Excessao("meu teste");
    }
    catch(Excessao& ex)
    {
        std::cout << "Opa!!! Ocorreu algum erro" << std::endl\
        << ex.what() << std::endl;
        return -1;
    }
    return 0;
}
