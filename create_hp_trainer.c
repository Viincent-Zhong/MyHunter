/*
** EPITECH PROJECT, 2020
** create_hp_trainer
** File description:
** Create hp and trainer
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"
#include <SFML/System.h>

sfSprite *create_trainer(sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    sfTexture *trainer = sfTexture_createFromFile("trainer_running.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {5, 5};
    sfVector2f pos = {1300, 530};

    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, trainer, sfTrue);
    return sprite;
}

sfSprite *create_life(sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    sfTexture *hp = sfTexture_createFromFile("hp_sheet.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {0.5, 0.5};
    sfVector2f pos = {0, 0};

    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, hp, sfTrue);
    return sprite;
}