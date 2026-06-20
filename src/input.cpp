#include "../include/wpl.hpp"
#include <iostream>

namespace WPL
{
    static bool keys[256] = { false };

    void UpdateInput()
    {
        // Futuramente: suporte ao teclado, joystick e Nintendo 3DS
    }

    bool IsKeyPressed(int key)
    {
        if (key < 0 || key >= 256)
            return false;

        return keys[key];
    }
}
