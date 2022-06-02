/*
** EPITECH PROJECT, 2021
** horizon.h
** File description:
** horizon
*/

#include "../my_runner.h"

#ifndef __HORIZON_H__
    #define __HORIZON_H__

    typedef struct s_horizon {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
        sfVector2f pos;
    } t_horizon;

#endif /* !HORIZON_H_ */
