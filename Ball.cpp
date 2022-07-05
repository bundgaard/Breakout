//
// Created by dbundgaard on 2022-07-05.
//
#include <cmath>
#include <cstdio>
#include "Ball.h"

void Ball::Update()
{

}

void Ball::Draw(SDL_Renderer *renderer)
{


    for(auto i = 0; i < 360; i++) {
        auto x = static_cast<int>((m_x + m_radius  * cos((double)i * (3.1457/180.0))));
        auto y = static_cast<int>((m_y + m_radius  * sin((double)i * (3.1457/180.0))));
        SDL_SetRenderDrawColor(renderer, 255,255,255,255);
        SDL_RenderDrawPoint(renderer,  x, y);
        SDL_RenderDrawPoint(renderer,  x, y);
        printf("radius=%d,phi=%f; %d,%d\n",m_radius,((double)i*(3.1457/180.0)), x,y);

    }

}

Ball::Ball(int x, int y, int radius) : m_x(x), m_y(y), m_radius(radius)
{

}
