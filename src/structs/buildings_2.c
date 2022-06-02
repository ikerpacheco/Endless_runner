/*
** EPITECH PROJECT, 2021
** floor2
** File description:
** floor2
*/

#include "../../include/my_runner.h"

t_buildings2 *init_buildings2(void)
{
    t_buildings2 *buildings2 = malloc(sizeof(t_buildings2));

    buildings2->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/houses.png", NULL);
    buildings2->sprite = sfSprite_create();
    buildings2->resize = (sfVector2f){1, 1};
    buildings2->pos = (sfVector2f){1920, 0};

    sfSprite_setTexture(buildings2->sprite, buildings2->texture, sfTrue);
    sfSprite_setPosition(buildings2->sprite, buildings2->pos);
    sfSprite_scale(buildings2->sprite, buildings2->resize);
    return (buildings2);
}