/*
** EPITECH PROJECT, 2020
** main
** File description:
** Main for my_hunter
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include <time.h>
#include "h_hunter.h"
#include <SFML/Audio.h>

void main(void)
{
    sfVideoMode mode = {1500, 900, 32};
    sfRenderWindow *window;
    sfMusic *music;

    music = sfMusic_createFromFile("twin_leaf_town.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    window = sfRenderWindow_create(mode, "My Hunter",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    deal_with_gameloop(window);
    sfRenderWindow_destroy(window);
    sfMusic_destroy(music);
}