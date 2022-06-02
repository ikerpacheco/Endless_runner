/*
** EPITECH PROJECT, 2021
** background
** File description:
** background
*/

#include "../my_runner.h"

#ifndef __BUILDINGS_H__
    #define __BUILDINGS_H__

    typedef struct s_buildings {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
        sfVector2f pos;
    } t_buildings;

#endif /* !BUILDINGS_H_ */
