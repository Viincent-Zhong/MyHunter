/*
** EPITECH PROJECT, 2020
** h_hunter
** File description:
** header file for myhunter
*/

#ifndef H_HUNTER_H_
#define H_HUNTER_H_

sfSprite *create_cursor(void);
sfSprite *move_cursor(sfRenderWindow *window, sfEvent event,
sfSprite *cursor);
sfSprite *create_sprite(sfRenderWindow *window, char *filepath, double x,
double y);
sfVector2f disp_sprite(sfRenderWindow *window, struct sprite_s *sprite_s);
struct sprite_s *deal_screen(sfRenderWindow *window, sfEvent event,
struct sprite_s *sprite_s);
void deal_event(sfEvent event, sfRenderWindow *window,
struct sprite_s *sprite_s);
void deal_with_gameloop(sfRenderWindow *window);
sfSprite *create_ohoh(sfRenderWindow *window, double random);
sfSprite *create_ok(sfRenderWindow *window, double random);
sfSprite *create_background(void);
void deal_screen_if_event(sfRenderWindow *window, sfEvent event,
struct sprite_s *sprite_s);
void take_input(sfEvent event, sfRenderWindow *window,
struct sprite_s *sprite_s);
sfSprite *create_start_background(void);
struct sprite_s *create_start(sfRenderWindow *window,
struct sprite_s *sprite_s);
struct sprite_s *move_in_spritesheet(sfRenderWindow *window,
struct sprite_s *sprite_s);
struct sprite_s *move_trainer(sfRenderWindow *window,
struct sprite_s *sprite_s);
sfSprite *create_trainer(sfRenderWindow *window,
struct sprite_s *sprite_s);
void disp_cloud(sfRenderWindow *window, struct sprite_s *sprite_s);
sfSprite *create_cloud(double x, double y);
void disp_trainer(sfRenderWindow *window, struct sprite_s *sprite_s);
void initiate_pokemon(sfRenderWindow *window, struct sprite_s *sprite_s,
double random);
char *int_to_str(int nb);
struct sprite_s *poke_out(sfRenderWindow *window,
struct sprite_s *sprite_s, sfEvent event);
void initiate_score(sfRenderWindow *window, struct sprite_s *sprite_s);
void initiate_bg_cursor(sfRenderWindow *window, struct sprite_s *sprite_s);
struct sprite_s *initiate_hp(sfRenderWindow *window,
struct sprite_s *sprite_s);
sfSprite *create_life(sfRenderWindow *window,
struct sprite_s *sprite_s);
sfSprite *create_ogre(sfRenderWindow *window, double random);
void initiate_pokemon2(sfRenderWindow *window, struct sprite_s *sprite_s,
double random);
void initiate_pokemon3(sfRenderWindow *window, struct sprite_s *sprite_s,
double random);

#endif /* H_HUNTER_H_ */