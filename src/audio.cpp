#include "../include/wpl.hpp"
#include <iostream>
#include <string>

namespace WPL
{
    bool LoadSound(const std::string& file)
    {
        std::cout << "Carregando som: " << file << std::endl;
        return true;
    }

    void PlaySound(const std::string& file)
    {
        std::cout << "Reproduzindo: " << file << std::endl;
    }

    void StopAllSounds()
    {
        std::cout << "Parando todos os sons." << std::endl;
    }
}
