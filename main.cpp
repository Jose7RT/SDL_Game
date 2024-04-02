// C++ Standard Libraries
#include <iostream>

// Third-party libraries
#include <SDL2/SDL.h>

int main(int argc, char* argv[])
{
    SDL_Window* window = nullptr;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        "Ventanita",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_OPENGL // SDL_WINDOW_SHOWN
    );

    SDL_Delay(3000);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}