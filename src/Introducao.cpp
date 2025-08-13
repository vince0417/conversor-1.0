#include "../include/Introducao.hpp"

#include <iostream>
#include <string>
#include <unistd.h>
#include <chrono>
#include <thread>

Introducao::Introducao()
{
}

Introducao::~Introducao()
{
}

void Introducao::boasVindas(std::string& usuario, std::string& saudacao)
{
    std::string inicio{"Antes de começarmos, como gostaria de ser chamado(a)?: "};
    for (char letra : inicio)
    {
        std::cout << letra << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Pausa a execução do programa por determinado tempo;
    }
    std::getline(std::cin, usuario);
    std::cout << std::endl;

    saudacao = "Será um prazer te ajudar, !\nEu sou um conversor de bases númericas.";
    saudacao.insert(27,usuario); // Insere a string usuario no local específicado;
    for (char letra : saudacao)
    {
        std::cout << letra << std::flush; // Imprime a letra atual e força o envio do buffer para o terminal, garantindo a impressão imediata.
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;
}