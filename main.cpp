#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>

#include "include/Introducao.hpp"
#include "include/Painel.hpp"
#include "include/Conversor.hpp"

int main()
{
    Introducao introducao;
    Painel painel;
    Conversor conversor;
    
    system("clear"); 
    std::string usuario{}, saudacao{};
    introducao.boasVindas(usuario,saudacao);
    
    std::this_thread::sleep_for(std::chrono::seconds(3));
    while (true)
    {
        int opcao{}, base{};
        painel.painel(usuario,opcao,base);

        std::string pergunta{"Qual número gostaria de converter?: "};
        for (char letra : pergunta)
        {
            std::cout << letra << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        
        switch (opcao)
        {
            case 2:
            case 5:
            case 12:
                conversor.forOctal(usuario, base);
                break;
            case 4:
            case 7:
            case 10:
                conversor.forDecimal(usuario, base);
                break;
            case 3:
            case 6:
            case 9:
                conversor.forBinario(usuario, base);
                break;
            case 1:
            case 8:
            case 11:
                conversor.forHexadecimal(usuario, base);
                break;
            default:
                std::cout << "Não foi possível encontrar esta opção, " << usuario << "\n";
        }
        
        char continuar{};
        std::cout << "\nDeseja continuar?(S/N): ";
        std::cin >> continuar;
        if (continuar == 'S' || continuar == 's') continue;
        else{
            std::string temp{"....."};
            std::cout << "Fechando";
            for (char it : temp)
            {
                std::cout << it << std::flush;
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            std::cout << "\n";
            break;
        }
    }
    system("clear");
    return 0;
}
