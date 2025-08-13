#include "../include/Painel.hpp"

#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>

Painel::Painel()
{
}

Painel::~Painel()
{
}

void Painel::painel(std::string& usuario, int& opcao, int& base){
    system("clear");
    std::cout << "----------------------Painel----------------------\n";
    std::cout << " 1 - Decimal para Hexadecimal;\n";
    std::cout << " 2 - Decimal para Octal;\n";
    std::cout << " 3 - Decimal para Binario;\n";
    std::cout << " 4 - Hexadecimal para Decimal;\n";
    std::cout << " 5 - Hexadecimal para Octal;\n";
    std::cout << " 6 - Hexadecimal para Binario;\n";
    std::cout << " 7 - Octal para Decimal;\n";
    std::cout << " 8 - Octal para Hexadecimal;\n";
    std::cout << " 9 - Octal para Binario;\n";
    std::cout << "10 - Binario para Decimal;\n";
    std::cout << "11 - Binario para Hexadecimal;\n";
    std::cout << "12 - Binario para octal.\n";
    std::cout << "--------------------------------------------------\n";

    std::string escolha{usuario + ", escolha um número de acordo com a conversão desejada: "};
    for (char letra : escolha){
        std::cout << letra << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cin >> opcao;

    switch (opcao)
    {
        case 1:
        case 2:
        case 3:
            base = 10;
            break;
        case 4:
        case 5:
        case 6:
            base = 16;
            break;
        case 7:
        case 8:
        case 9:
            base = 8;
            break;
        case 10:
        case 11:
        case 12:
            base = 2;
            break;
        }
}
