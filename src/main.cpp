#include "../include/wpl.hpp"
#include <iostream>

int main()
{
    if (!WPL::Init())
    {
        std::cout << "Falha ao iniciar WPL." << std::endl;
        return 1;
    }

    for (int i = 0; i < 60; i++)
    {
        WPL::BeginFrame();

        WPL::DrawRectangle(
            100 + i,
            80,
            64,
            64
        );

        WPL::EndFrame();
    }

    WPL::Shutdown();

    return 0;
}
