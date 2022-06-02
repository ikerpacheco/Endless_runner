/*
** EPITECH PROJECT, 2021
** player
** File description:
** player
*/

#include "../my_runner.h"

#ifndef __PLAYER_H__
    #define __PLAYER_H__

    typedef struct s_player {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
        sfIntRect rect;
        sfVector2f position;
        sfVector2f velocity;
        sfVector2f gravity;
        int space;
        int counter;
        int up;
        float numbers;
        int collision;
    } t_player;

#endif /* !PLAYER_H_ */
