/*
** EPITECH PROJECT, 2020
** deal_spritesheet
** File description:
** Deal with spritesheet, move, etc...
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"
#include <SFML/System.h>

struct sprite_s *move_in_spritesheet(sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    sfTexture *ohoh = sfTexture_createFromFile("ohoh_spritesheet.png", NULL);

    sprite_s->rectsprite.left = sprite_s->pos_sheet;
    sprite_s->rectsprite.top = 0;
    sprite_s->rectsprite.height = sprite_s->height;
    sprite_s->rectsprite.width = sprite_s->large;
    sprite_s->clock = sfClock_create();
    if (sfClock_getElapsedTime(sprite_s->clock).microseconds >= 1.9) {
        sprite_s->pos_sheet = sprite_s->pos_sheet + sprite_s->increment;
        if (sprite_s->pos_sheet >= sprite_s->max)
            sprite_s->pos_sheet = 0;
        sfClock_restart(sprite_s->clock);
    }
    sfSprite_setTextureRect(sprite_s->sprite_pokemons,
    sprite_s->rectsprite);
    return sprite_s;
}

struct sprite_s *move_trainer(sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    sfTexture *trainer = sfTexture_createFromFile("trainer_running.png", NULL);
    float time;

    sprite_s->rectsprite.left = sprite_s->sheet_pos_trainer;
    sprite_s->rectsprite.top = 0;
    sprite_s->rectsprite.height = 62;
    sprite_s->rectsprite.width = 28;
    sprite_s->clock = sfClock_create();
    if (sfClock_getElapsedTime(sprite_s->clock).microseconds >= 1) {
        sprite_s->sheet_pos_trainer += 28;
        if (sprite_s->sheet_pos_trainer >= 60) {
            sprite_s->sheet_pos_trainer = 1;
        }
        sfClock_restart(sprite_s->clock);
    }
    sfSprite_setTextureRect(sprite_s->trainer, sprite_s->rectsprite);
    return sprite_s;
}