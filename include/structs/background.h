/*
** EPITECH PROJECT, 2021
** background
** File description:
** background
*/

#include "../my_runner.h"

#ifndef __BACKGROUND_H__
    #define __BACKGROUND_H__

    typedef struct s_background {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
        sfVector2f pos;
    } t_background;

#endif /* !BACKGROUND_H_ */
