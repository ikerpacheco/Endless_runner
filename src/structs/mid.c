/*
** EPITECH PROJECT, 2021
** mid_strcut
** File description:
** backgorund
*/

#include "../../include/my_runner.h"

t_mid *init_mid(void)
{
    t_mid *mid = malloc(sizeof(t_mid));

    mid->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/car_trees_etc.png", NULL);
    mid->sprite = sfSprite_create();
    mid->resize = (sfVector2f){1, 1};
    mid->pos = (sfVector2f){0, 0};

    sfSprite_setTexture(mid->sprite, mid->texture, sfTrue);
    sfSprite_setPosition(mid->sprite, mid->pos);
    sfSprite_scale(mid->sprite, mid->resize);
    return (mid);
}