/*
** EPITECH PROJECT, 2022
** enemy.h
** File description:
** enemy h
*/

#include "../my_runner.h"

#ifndef __ENEMY_H__
    #define __ENEMY_H__

    typedef struct s_enemy {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
        sfIntRect rect;
        sfVector2f position;
        sfVector2f velocity;
        sfVector2f gravity;
        sfVector2f pos;
    } t_enemy;

#endif /* !enemy_H_ */