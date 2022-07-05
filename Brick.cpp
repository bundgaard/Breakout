//
// Created by dbundgaard on 2022-07-05.
//

#include "Brick.h"

void Brick::Update()
{

}

void Brick::Draw(SDL_Renderer *renderer)
{
    SDL_Rect rect = {.x = m_x, .y = m_y, .w = m_width, .h = m_height};
    SDL_SetRenderDrawColor(renderer, m_color.r, m_color.g, m_color.b, m_color.a );
    SDL_RenderFillRect(renderer, &rect);
}

Brick::Brick(int x, int y, int width, int height, int life, SDL_Color color) : m_x(x), m_y(y),
m_width(width), m_height(height),
m_life(life),
m_color(color)
{

}
