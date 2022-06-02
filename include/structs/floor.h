/*
** EPITECH PROJECT, 2021
** floor
** File description:
** floor
*/

#include "../my_runner.h"

#ifndef __FLOOR_H__
    #define __FLOOR_H__

    typedef struct s_floor {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
        sfVector2f pos;
    } t_floor;

#endif
