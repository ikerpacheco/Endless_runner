/*
** EPITECH PROJECT, 2021
** floor2
** File description:
** floor2
*/

#include "../../include/my_runner.h"

t_mid2 *init_mid2(void)
{
    t_mid2 *mid2 = malloc(sizeof(t_mid2));

    mid2->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/car_trees_etc.png", NULL);
    mid2->sprite = sfSprite_create();
    mid2->resize = (sfVector2f){1, 1};
    mid2->pos = (sfVector2f){1920, 0};

    sfSprite_setTexture(mid2->sprite, mid2->texture, sfTrue);
    sfSprite_setPosition(mid2->sprite, mid2->pos);
    sfSprite_scale(mid2->sprite, mid2->resize);
    return (mid2);
}