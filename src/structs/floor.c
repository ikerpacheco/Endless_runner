/*
** EPITECH PROJECT, 2021
** floor
** File description:
** floor
*/

#include "../../include/my_runner.h"

t_floor *init_floor(void)
{
    t_floor *floor = malloc(sizeof(t_floor));

    floor->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/road.png", NULL);
    floor->sprite = sfSprite_create();
    floor->resize = (sfVector2f){1, 1};
    floor->pos = (sfVector2f){0, 0};

    sfSprite_setTexture(floor->sprite, floor->texture, sfTrue);
    sfSprite_setPosition(floor->sprite, floor->pos);
    sfSprite_scale(floor->sprite, floor->resize);
    return (floor);
}