/*
** EPITECH PROJECT, 2020
** initiate
** File description:
** Initiate the structure
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"
#include <SFML/Audio.h>

void initiate_pokemon2(sfRenderWindow *window, struct sprite_s *sprite_s,
double random)
{
    if (random <= 10 && random > 1){
        sprite_s->sprite_pokemons = create_ok(window, rand() % 550);
        sprite_s->difx = 110;
        sprite_s->ydif = 120;
        sprite_s->large = 110;
        sprite_s->height = 130;
        sprite_s->increment = 110;
        sprite_s->max = 300;
        sprite_s->pos_sheet = 0;
    }
    initiate_pokemon3(window, sprite_s, random);
}

void initiate_pokemon3(sfRenderWindow *window, struct sprite_s *sprite_s,
double random)
{
    if (random == 1) {
        sprite_s->sprite_pokemons = create_ogre(window, rand() % 550);
        sprite_s->speed = sprite_s->speed / 3;
        sprite_s->large = 100;
        sprite_s->height = 100;
        sprite_s->max = 0;
        sprite_s->pos_sheet = 0;
        sprite_s->increment = 0;
        sprite_s->difx = 100;
        sprite_s->ydif = 100;
    }
}