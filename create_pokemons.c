/*
** EPITECH PROJECT, 2020
** create_pokemons.c
** File description:
** Create pokemon sprite for my_hunter
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"
#include <SFML/System.h>

sfSprite *create_ohoh(sfRenderWindow *window, double random)
{
    sfTexture *ohoh = sfTexture_createFromFile("ohoh_spritesheet.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {1.5, 1.5};
    sfVector2f pos = {0, random};

    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, ohoh, sfTrue);
    return sprite;
}

sfSprite *create_ok(sfRenderWindow *window, double random)
{
    sfTexture *ohoh = sfTexture_createFromFile("lugia.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {1, 1};
    sfVector2f pos = {0, random};

    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, ohoh, sfTrue);
    return sprite;
}

struct sprite_s *create_start(sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    sfTexture *start = sfTexture_createFromFile("play.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {0.1, 0.1};
    sfVector2f pos = {600, 300};

    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, start, sfTrue);
    sprite_s->start_button = sprite;
    sprite_s->start_pos = sfSprite_getPosition(sprite);
    return sprite_s;
}

sfSprite *create_ogre(sfRenderWindow *window, double random)
{
    sfTexture *ogre = sfTexture_createFromFile("ogre.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {1, 1};
    sfVector2f pos = {0, random};

    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, ogre, sfTrue);
    return sprite;
}