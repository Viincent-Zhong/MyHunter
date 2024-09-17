/*
** EPITECH PROJECT, 2020
** create_sprite.c
** File description:
** Create_sprite for my_hunter
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include "h_hunter.h"

sfSprite *create_cursor(void)
{
    sfTexture *t_cursor = sfTexture_createFromFile("pokeballe.png", NULL);
    sfSprite *cursor = sfSprite_create();
    sfVector2f scale = { 1, 1};

    sfSprite_setScale(cursor, scale);
    sfSprite_setTexture(cursor, t_cursor, sfTrue);
    return cursor;
}

sfSprite *create_background(void)
{
    sfTexture *background = sfTexture_createFromFile("pokemon_fond.jpg", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {7, 4};

    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, background, sfTrue);
    return sprite;
}

sfSprite *create_cloud(double x, double y)
{
    sfTexture *cloud = sfTexture_createFromFile("cloud.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {6, 5};
    sfVector2f pos = {x, y};

    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, cloud, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return sprite;
}

void initiate_bg_cursor(sfRenderWindow *window, struct sprite_s *sprite_s)
{
    sprite_s->cursor = create_cursor();
    sprite_s->background = create_background();
    sprite_s->trainer = create_trainer(window, sprite_s);
    sprite_s->cloud = create_cloud(-200, 50);
    sprite_s->cloud2 = create_cloud(800, 300);
    sprite_s->y_cloud2 = 300;
    sprite_s->y_cloud = 50;
    sprite_s->stock_y = sprite_s->y_cloud2;
}
