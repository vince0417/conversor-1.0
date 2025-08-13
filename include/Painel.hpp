// #pragma once
#ifndef PAINEL_HPP
#define PAINEL_HPP

#include <string>

class Painel
{
public:
    Painel();
    ~Painel();

    void painel(std::string& usuario, int& opcao, int& base);
};

#endif
