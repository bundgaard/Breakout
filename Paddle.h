//
// Created by dbundgaard on 2022-07-05.
//

#ifndef BREAKOUT_PADDLE_H
#define BREAKOUT_PADDLE_H
#include <SDL2/SDL.h>

class Paddle
{
    int m_x;
    int m_y;
    int m_size;
public:
    Paddle(int,int,int);
    void Draw(SDL_Renderer *renderer);
    void Update();
};


#endif //BREAKOUT_PADDLE_H
