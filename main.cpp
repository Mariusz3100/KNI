#include "Window.h"
#include <iostream>

//no rest for the wicked


int main()
{

    Window Okno;

    if(Okno.CzyOtwarte())
    {
        Okno.Zamknij();
        std::cout<<"zamykam okno"<<std::endl;
    }

    std::cout<<"Juz zamkniete"<<std::endl;




    return 0;
}
