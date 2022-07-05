//
// Created by dbundgaard on 2022-07-05.
//

#include "Paddle.h"

Paddle::Paddle(int x, int y, int size) : m_size(size), m_x(x), m_y(y)
{

}

void Paddle::Update()
{

}

void Paddle::Draw(SDL_Renderer *renderer)
{
    SDL_Rect paddle = {.x = m_x, .y = m_y, .w = m_size, .h = 16};
    SDL_SetRenderDrawColor(renderer, 0,255,0, 255);
    SDL_RenderFillRect(renderer, &paddle);
}
