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

void initiate_pokemon(sfRenderWindow *window, struct sprite_s *sprite_s,
double random)
{
    if (random > 10) {
        sprite_s->sprite_pokemons = create_ohoh(window, rand() % 550);
        sprite_s->difx = 100;
        sprite_s->ydif = 100;
        sprite_s->large = 61;
        sprite_s->height = 61;
        sprite_s->increment = 61;
        sprite_s->max = 220;
        sprite_s->pos_sheet = 62;
    }
    initiate_pokemon2(window, sprite_s, random);
}

void initiate_score(sfRenderWindow *window, struct sprite_s *sprite_s)
{
    sfVector2f pos = {760, 0};
    sfFont *font;

    sprite_s->score = 0;
    sprite_s->t_score = sfText_create();
    sprite_s->str_score = int_to_str(sprite_s->score);
    sfText_setPosition(sprite_s->t_score, pos);
    font = sfFont_createFromFile("Font.ttf");
    sfText_setFont(sprite_s->t_score, font);
    sfText_setString(sprite_s->t_score, sprite_s->str_score);
    sfText_setCharacterSize(sprite_s->t_score, 40);
    sfText_setColor(sprite_s->t_score, sfRed);
}

struct sprite_s *initiate_hp(sfRenderWindow *window, struct sprite_s *sprite_s)
{
    sfTexture *hp = sfTexture_createFromFile("hp_sheet.png", NULL);

    sprite_s->life.left = sprite_s->hp_pos;
    sprite_s->life.top = 0;
    sprite_s->life.height = 436;
    sprite_s->life.width = 460;
    sfSprite_setTextureRect(sprite_s->s_life, sprite_s->life);
    return sprite_s;
}