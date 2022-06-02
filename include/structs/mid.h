/*
** EPITECH PROJECT, 2021
** midd.h
** File description:
** mid
*/

#include "../my_runner.h"

#ifndef __MID_H__
    #define __MID_H__

    typedef struct s_mid {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
        sfVector2f pos;
    } t_mid;

#endif /* !MID_H_ */
