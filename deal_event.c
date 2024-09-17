/*
** EPITECH PROJECT, 2020
** deal_event
** File description:
** Deal with the event
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"
#include <stdio.h>

void start_screen(sfEvent event, sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    sfVector2f far = {12342, 0};

    if (sprite_s->start_button && event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.button == sfMouseLeft)
        sfSprite_setPosition(sprite_s->start_button, far);
        deal_screen_if_event(window, event, sprite_s);
    }
}

void take_input(sfEvent event, sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    sfVector2f pos = {0, 0};

    srand(time(NULL));
    pos.y = rand() % 550;
    if (event.type == sfEvtMouseButtonPressed)
        if (event.mouseButton.button == sfMouseLeft && event.mouseButton.y <
        sprite_s->poke_pos.y + sprite_s->ydif && event.mouseButton.y >
        sprite_s->poke_pos.y && event.mouseButton.x >
        sprite_s->poke_pos.x && event.mouseButton.x <
        sprite_s->poke_pos.x + sprite_s->difx) {
            initiate_pokemon(window, sprite_s, rand() % 100);
            sprite_s->pos_sheet = 0;
            sfSprite_setPosition(sprite_s->sprite_pokemons, pos);
            deal_screen_if_event(window, event, sprite_s);
            sprite_s->score += 1;
            if (sprite_s->score >= 10 && sprite_s->score % 10 == 0)
                sprite_s->speed = sprite_s->speed + 1;
            sprite_s->str_score = int_to_str(sprite_s->score);
            sfText_setString(sprite_s->t_score, sprite_s->str_score);
        }
}

void deal_event(sfEvent event, sfRenderWindow *window,
struct sprite_s *sprite_s)
{
    start_screen(event, window, sprite_s);
    take_input(event, window, sprite_s);
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}