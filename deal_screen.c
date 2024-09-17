/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** Create a game similar to duck hunt
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"

struct sprite_s *start_or_not(sfRenderWindow *window, struct sprite_s *sprite_s)
{
    if (sprite_s->start_pos.x < 5000) {
        sfRenderWindow_drawSprite(window, sprite_s->start_button, NULL);
        sprite_s = move_trainer(window, sprite_s);
        disp_trainer(window, sprite_s);
    }
    else {
        sfRenderWindow_drawSprite(window, sprite_s->s_life, NULL);
        sprite_s = move_in_spritesheet(window, sprite_s);
        sprite_s->poke_pos = disp_sprite(window, sprite_s);
    }
}

struct sprite_s *deal_screen(sfRenderWindow *window, sfEvent event,
struct sprite_s *sprite_s)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite_s->background, NULL);
    sprite_s->start_pos = sfSprite_getPosition(sprite_s->start_button);
    disp_cloud(window, sprite_s);
    poke_out(window, sprite_s, event);
    start_or_not(window, sprite_s);
    sprite_s->cursor = move_cursor(window, event, sprite_s->cursor);
    sfRenderWindow_drawText(window, sprite_s->t_score, NULL);
    sfRenderWindow_display(window);
    return sprite_s;
}

void deal_screen_if_event(sfRenderWindow *window, sfEvent event,
struct sprite_s *sprite_s)
{
    sfRenderWindow_display(window);
}