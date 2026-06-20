#include "../include/wpl.hpp"
#include <iostream>

namespace WPL
{
    bool Init()
    {
        std::cout << "WPL Graphics Inicializado" << std::endl;
        return true;
    }

    void BeginFrame()
    {
        std::cout << "Iniciando Frame" << std::endl;
    }

    void DrawRectangle(int x, int y, int w, int h)
    {
        std::cout
            << "Retangulo: "
            << x << ", "
            << y << " "
            << w << "x"
            << h << std::endl;
    }

    void EndFrame()
    {
        std::cout << "Finalizando Frame" << std::endl;
    }

    void Shutdown()
    {
        std::cout << "WPL Encerrado" << std::endl;
    }
}
