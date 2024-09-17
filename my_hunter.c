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
#include <SFML/Audio.h>

struct sprite_s *initiate_sprite(sfRenderWindow *window)
{
    struct sprite_s *sprite_s = malloc(sizeof(struct sprite_s) * 3);

    srand(time(NULL));
    sprite_s->speed = 3;
    sprite_s->capture = 0;
    sprite_s->s_life = create_life(window, sprite_s);
    sprite_s->hp = 3;
    sprite_s->hp_pos = 0;
    initiate_hp(window, sprite_s);
    initiate_pokemon(window, sprite_s, rand() % 100);
    create_start(window, sprite_s);
    initiate_bg_cursor(window, sprite_s);
    initiate_score(window, sprite_s);
    return sprite_s;
}

void deal_with_gameloop(sfRenderWindow *window)
{
    sfEvent event;
    struct sprite_s *sprite_s = initiate_sprite(window);

    sprite_s->sheet_pos_trainer = 1;
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    while (sfRenderWindow_isOpen(window)) {
        deal_screen(window, event, sprite_s);
        while (sfRenderWindow_pollEvent(window, &event))
            deal_event(event, window, sprite_s);
    }
    free(sprite_s);
}