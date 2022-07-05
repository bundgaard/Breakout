//
// Created by dbundgaard on 2022-07-05.
//

#ifndef BREAKOUT_BALL_H
#define BREAKOUT_BALL_H
#include <SDL2/SDL.h>

class Ball
{
private:
    int m_x;
    int m_y;
    int m_radius;
public:
    Ball(int x, int y, int radius);
    void Draw(SDL_Renderer *);
    void Update();

};


#endif //BREAKOUT_BALL_H
