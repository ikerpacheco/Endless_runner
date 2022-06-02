/*
** EPITECH PROJECT, 2021
** floor2
** File description:
** floor2
*/

#include "../../include/my_runner.h"

t_floor2 *init_floor2(void)
{
    t_floor2 *floor2 = malloc(sizeof(t_floor2));

    floor2->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/road.png", NULL);
    floor2->sprite = sfSprite_create();
    floor2->resize = (sfVector2f){1, 1};
    floor2->pos = (sfVector2f){1920, 0};

    sfSprite_setTexture(floor2->sprite, floor2->texture, sfTrue);
    sfSprite_setPosition(floor2->sprite, floor2->pos);
    sfSprite_scale(floor2->sprite, floor2->resize);
    return (floor2);
}