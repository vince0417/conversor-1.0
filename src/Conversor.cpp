#include "../include/Conversor.hpp"

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

Conversor::Conversor()
{
}

Conversor::~Conversor()
{
}

void Conversor::forOctal(std::string &usuario, int &base)
{
    std::vector<char> numbers{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    std::string num;
    std::cin >> num;

    int resultado{};
    std::reverse(num.begin(), num.end());
    for (int i {}; i < num.size(); i++)
    {
        for (int x {}; x < numbers.size(); x++)
        {
            if (num.at(i) == numbers.at(x)){
                resultado += x*(pow(base,i));
                break;
            }
        }
    }

    if (resultado < 8) std::cout << usuario << ", o resultado é: " << resultado << "\n";
    else{
        std::vector<int> restos;
        while (resultado >= 8)
        {
            restos.push_back(resultado%8); 
            resultado /= 8;
            if (resultado < 8) restos.push_back(resultado);
        }
        reverse(restos.begin(), restos.end()); 
        std::cout << usuario << ", o resultado é: ";
        for (int i : restos)
            std::cout << numbers.at(i);
        std::cout << "\n";
    }
}

void Conversor::forDecimal(std::string &usuario, int &base)
{
    std::vector<char> hexaNumbers{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    std::string num;
    std::cin >> num;

    int resultado{};
    std::reverse(num.begin(), num.end());
    for (int i {}; i < num.size(); i++)
    {
        for (int x {}; x < hexaNumbers.size(); x++)
        {
            if (num.at(i) == hexaNumbers.at(x)){
                resultado += x*(pow(base,i));
                break;
            }
        }
    }
    
    std::cout << usuario << ", o resultado é: " << resultado << "\n";
}

void Conversor::forBinario(std::string &usuario, int &base)
{
    std::vector<char> numbers{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    std::string num;
    std::cin >> num;

    int resultado{};
    std::reverse(num.begin(), num.end());
    for (int i {}; i < num.size(); i++)
    {
        for (int x {}; x < numbers.size(); x++)
        {
            if (num.at(i) == numbers.at(x)){
                resultado += x*(pow(base,i));
                break;
            }
        }
    }

    std::vector<int> restos;
    while (resultado >= 2)
    {
        restos.push_back(resultado%2); 
        resultado /= 2;
        if (resultado < 2) restos.push_back(resultado);
    }
    reverse(restos.begin(), restos.end());
    std::cout << usuario << ", o resultado é: ";
    for (int i : restos)
        std::cout << numbers.at(i);
    std::cout << "\n";
}

void Conversor::forHexadecimal(std::string &usuario, int &base)
{
    std::vector<char> numbers{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    std::string num;
    std::cin >> num;

    int resultado{};
    std::reverse(num.begin(), num.end());
    for (int i {}; i < num.size(); i++)
    {
        for (int x {}; x < numbers.size(); x++)
        {
            if (num.at(i) == numbers.at(x)){
                resultado += x*(pow(base,i));
                break;
            }
        }
    }

    std::vector<char> hexaNumbers{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if (resultado <= 15) std::cout << usuario << ", o resultado é: " << hexaNumbers.at(resultado) << "\n";
    else if (resultado == 16) std::cout << usuario << ", o resultado é: " << 10 << "\n";
    else{
        std::vector<int> restos;
        while (resultado >= 16)
        {
            restos.push_back(resultado%16);
            resultado /= 16;
            if (resultado < 16) restos.push_back(resultado);
        }
        std::reverse(restos.begin(), restos.end());
        std::cout << usuario << ", o resultado é: ";
        for (int i : restos)
            std::cout << hexaNumbers.at(i);
        std::cout << "\n";
    }
}
