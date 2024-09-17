/*
** EPITECH PROJECT, 2020
** animate_bg_cursor
** File description:
** Move the cursor and background
*/

#include <SFML/Graphics.h>
#include "struct_sprite.h"
#include "h_hunter.h"

sfSprite *move_cursor(sfRenderWindow *window, sfEvent event, sfSprite *cursor)
{
    sfVector2f pos;

    if (event.mouseMove.x != 0 && event.mouseMove.y != 0) {
        pos.x = event.mouseMove.x - 20;
        pos.y = event.mouseMove.y - 17;
    }
    else {
        pos.x = event.mouseButton.x - 20;
        pos.y = event.mouseButton.y - 17;
    }
    sfSprite_setPosition(cursor, pos);
    sfRenderWindow_drawSprite(window, cursor, NULL);
    return cursor;
}