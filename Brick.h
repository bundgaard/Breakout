//
// Created by dbundgaard on 2022-07-05.
//

#ifndef BREAKOUT_BRICK_H
#define BREAKOUT_BRICK_H

#include <SDL2/SDL.h>

class Brick
{
private:
    int m_life;
    int m_x;
    int m_y;

    int m_width;
    int m_height;
    SDL_Color m_color;

public:
    Brick(int x, int y, int width, int height, int life, SDL_Color color);

    void Draw(SDL_Renderer *);

    void Update();
};


#endif //BREAKOUT_BRICK_H
