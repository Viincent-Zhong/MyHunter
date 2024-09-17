/*
** EPITECH PROJECT, 2020
** struct_sprite
** File description:
** Structure of sprite
*/

#ifndef STRUCT_SPRITE_H_
#define STRUCT_SPRITE_H_

#include <SFML/Graphics.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct sprite_s
{
    sfSprite *sprite_pokemons;
    sfSprite *cursor;
    sfSprite *background;
    sfSprite *start_button;
    sfVector2f poke_pos;
    sfVector2f start_pos;
    sfIntRect rectsprite;
    int height;
    int large;
    int increment;
    int max;
    double speed;
    float difx;
    float ydif;
    int pos_sheet;
    int sheet_pos_trainer;
    sfClock *clock;
    sfSprite *trainer;
    sfSprite *cloud;
    sfSprite *cloud2;
    double y_cloud;
    double y_cloud2;
    double stock_y;
    int score;
    sfText *t_score;
    char *str_score;
    sfSprite *captured;
    int capture;
    sfClock *timer;
    int hp;
    sfIntRect life;
    int hp_pos;
    sfSprite *s_life;
    int stock;
};

#endif /* STRUCT_SPRITE_H_ */