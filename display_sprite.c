/*
** EPITECH PROJECT, 2020
** display_sprite.c
** File description:
** display_sprite for my_hunter
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include "h_hunter.h"

sfVector2f disp_sprite(sfRenderWindow *window, struct sprite_s *sprite_s)
{
    sfVector2f offset = {sprite_s->speed, 0};
    sfVector2f pos = sfSprite_getPosition(sprite_s->sprite_pokemons);

    sfRenderWindow_drawSprite(window, sprite_s->sprite_pokemons, NULL);
    sfSprite_move(sprite_s->sprite_pokemons, offset);
    return pos;
}

void disp_cloud(sfRenderWindow *window, struct sprite_s *sprite_s)
{
    sfVector2f offset = {1, 0};
    sfVector2f pos = sfSprite_getPosition(sprite_s->cloud);
    sfVector2f pos2 = sfSprite_getPosition(sprite_s->cloud2);
    sfVector2f start = {-1400, sprite_s->y_cloud2};

    sfRenderWindow_drawSprite(window, sprite_s->cloud, NULL);
    sfSprite_move(sprite_s->cloud, offset);
    sfRenderWindow_drawSprite(window, sprite_s->cloud2, NULL);
    sfSprite_move(sprite_s->cloud2, offset);
    if (pos.x >= 1450) {
        sprite_s->y_cloud2 = sprite_s->stock_y;
        sfSprite_setPosition(sprite_s->cloud, start);
    }
    if (pos2.x >= 1450) {
        sprite_s->y_cloud2 = sprite_s->y_cloud;
        sfSprite_setPosition(sprite_s->cloud2, start);
    }
}

void disp_trainer(sfRenderWindow *window, struct sprite_s *sprite_s)
{
    sfVector2f offset = {-20, 0};
    sfVector2f pos = sfSprite_getPosition(sprite_s->trainer);
    sfVector2f start = {1800, 530};

    sfRenderWindow_drawSprite(window, sprite_s->trainer, NULL);
    sfSprite_move(sprite_s->trainer, offset);
    if (pos.x <= -50)
        sfSprite_setPosition(sprite_s->trainer, start);
}