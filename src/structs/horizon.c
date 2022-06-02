/*
** EPITECH PROJECT, 2021
** background_strcut
** File description:
** backgorund
*/

#include "../../include/my_runner.h"

t_horizon *init_horizon(void)
{
    t_horizon *horizon = malloc(sizeof(t_horizon));

    horizon->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/houses&trees_bg.png", NULL);
    horizon->sprite = sfSprite_create();
    horizon->resize = (sfVector2f){1, 1};
    horizon->pos = (sfVector2f){0, 0};

    sfSprite_setTexture(horizon->sprite, horizon->texture, sfTrue);
    sfSprite_scale(horizon->sprite, horizon->resize);
    return (horizon);
}