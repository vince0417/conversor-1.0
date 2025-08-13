// #pragma once
#ifndef CONVERSOR_HPP
#define CONVERSOR_HPP

#include <string>

class Conversor
{
public:
    Conversor();
    ~Conversor();

    void forOctal(std::string& usuario, int& base);
    void forDecimal(std::string& usuario, int& base);
    void forBinario(std::string& usuario, int& base);
    void forHexadecimal(std::string& usuario, int& base);
};

#endif
