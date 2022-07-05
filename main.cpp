#include <iostream>
#include <SDL2/SDL.h>
#include <vector>
#include "Paddle.h"
#include "Brick.h"
#include "Ball.h"
int main()
{
    auto window = SDL_CreateWindow("Breakout", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 512, 512, 0);
    auto renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);

    bool quit = false;
    SDL_Event event;


    Ball ball(512/2, 460, 16);

    Paddle paddle((512-60) / 2, 488, 60);
    std::vector<Brick> bricks;
    int brick_x = 0;
    int brick_y = 0;
    for(auto i = 0; i < 65; i++)
    {
        bricks.emplace_back(brick_x, brick_y, 48, 20, 1, SDL_Color{255,255,0,255});
        brick_x += 50;
        if ((i+1)%8 == 0)
        {
            brick_x = 0 ;
            brick_y += 22;
        }

    }


    while(!quit)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                quit = true;
                break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0,0,0,255);
        SDL_RenderClear(renderer);

        for(auto& brick : bricks)
        {
            brick.Draw(renderer);
        }

      ball.Draw(renderer);
        paddle.Draw(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(10);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
