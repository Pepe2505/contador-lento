// 22_12_12_007_contador_lento.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Antonio
//
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << i << std::endl;
        Sleep(1000);
    }
}
