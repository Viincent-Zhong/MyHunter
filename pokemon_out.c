/*
** EPITECH PROJECT, 2020
** pokemon_out
** File description:
** Pokemon out of range
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"
#include <SFML/Audio.h>

struct sprite_s *poke_out(sfRenderWindow *window, struct sprite_s *sprite_s,
sfEvent event)
{
    sfVector2f pos = {0, 0};
    sfMusic *music;

    srand(time(NULL));
    pos.y = rand() % 550;
    if (sprite_s->poke_pos.x >= 1600 && sprite_s->poke_pos.x < 10000 ||
    sprite_s->poke_pos.y >= 950 && sprite_s->poke_pos.y < 10000) {
        sfSprite_setPosition(sprite_s->sprite_pokemons, pos);
        sprite_s->hp -= 1;
        sprite_s->hp_pos += 500;
        initiate_hp(window, sprite_s);
        music = sfMusic_createFromFile("oof.ogg");
        sfMusic_play(music);
    }
    if (sprite_s->hp <= 0) {
        sfMusic_destroy(music);
        free(sprite_s);
        sfRenderWindow_close(window);
    }
    return sprite_s;
}