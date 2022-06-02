/*
** EPITECH PROJECT, 2021
** horizon 2
** File description:
** horizon_2
*/

#include "../../include/my_runner.h"

t_horizon2 *init_horizon2(void)
{
    t_horizon2 *horizon2 = malloc(sizeof(t_horizon2));

    horizon2->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/houses&trees_bg.png", NULL);
    horizon2->sprite = sfSprite_create();
    horizon2->resize = (sfVector2f){1, 1};
    horizon2->pos = (sfVector2f){1920, 0};

    sfSprite_setTexture(horizon2->sprite, horizon2->texture, sfTrue);
    sfSprite_setPosition(horizon2->sprite, horizon2->pos);
    sfSprite_scale(horizon2->sprite, horizon2->resize);
    return (horizon2);
}