#include <SDL.h>
#include <SDL_timer.h>

#include "Vector2D.h"

#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
    const int screenWidth = 800;
    const int screenHeight = 640;

    SDL_Window* mainWindow = nullptr;

    SDL_Surface* screenSurface = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        return 1;
    }
    else
    {
        mainWindow = SDL_CreateWindow("AI Fundamentals the Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
        if (mainWindow == nullptr)
        {
            return 2;
        }
        else
        {
            screenSurface = SDL_GetWindowSurface(mainWindow);
            bool isRunning = true;
            SDL_Event mEvent;
            //Main Loop
            while (isRunning)
            {
                while (SDL_PollEvent(&mEvent))
                {
                    if (mEvent.type == SDL_QUIT)
                    {
                        isRunning = false;
                    }

                    SDL_UpdateWindowSurface(mainWindow);
                }
            }
            
        }
    }
    SDL_DestroyWindow(mainWindow);

    SDL_Quit();

    return 0;
}