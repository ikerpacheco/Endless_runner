/*
** EPITECH PROJECT, 2021
** my_h
** File description:
** my
*/

#ifndef __MY_H__
    #define __MY_H__

    #include <SFML/Graphics/Sprite.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/System/Vector2.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include "structs/background.h"
    #include "structs/floor.h"
    #include "structs/player.h"
    #include "structs/buildings.h"
    #include "structs/buildings.h"
    #include "structs/horizon.h"
    #include "structs/mid.h"
    #include "structs/floor_2.h"
    #include "structs/buildings_2.h"
    #include "structs/mid_2.h"
    #include "structs/enemy.h"
    #include "structs/heart.h"
    #include "structs/sound.h"
    #include "structs/jump.h"
    #include "structs/black_heart.h"
    #include "structs/horizon_2.h"
    #include "structs/background_2.h"
    #include "structs/game.h"

    void draw_sprites(sfRenderWindow *window, t_game *game);
    void move_rect(sfIntRect *rect, int offset, int max_value);
    void loop_movement_player(sfClock *clock, sfTime time,
    sfIntRect *rect1, sfIntRect *rect2);
    void reset_floor(sfRenderWindow *window, t_game *game);
    void reset_buildings(sfRenderWindow *window, t_game *game);
    void check_crash(t_game *game, sfRenderWindow *window);
    t_game *jump(t_game *game, sfRenderWindow *window);
    void my_putstr(char const *str);
    void my_putchar(char c);
    t_background *init_background(void);
    t_background2 *init_background2(void);
    t_floor2 *init_floor2(void);
    t_floor *init_floor(void);
    t_jump *init_jump(void);
    t_heart *init_heart(sfVector2f pos);
    t_black_heart *init_black_heart(void);
    t_horizon *init_horizon(void);
    t_horizon2 *init_horizon2(void);
    t_buildings *init_buildings(void);
    t_mid2 *init_mid2(void);
    t_sound *init_sound(void);
    t_enemy *init_enemy(void);
    t_buildings2 *init_buildings2(void);
    t_mid *init_mid(void);
    t_player *init_player(void);
    t_game *init_game(void);

#endif /* !MY_H_ */
