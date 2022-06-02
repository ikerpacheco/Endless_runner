/*
** EPITECH PROJECT, 2021
** background_strcut
** File description:
** backgorund
*/

#include "../../include/my_runner.h"

t_buildings *init_buildings(void)
{
    t_buildings *buildings = malloc(sizeof(t_buildings));

    buildings->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/houses.png", NULL);
    buildings->sprite = sfSprite_create();
    buildings->resize = (sfVector2f){1, 1};
    buildings->pos = (sfVector2f){0, 0};

    sfSprite_setTexture(buildings->sprite, buildings->texture, sfTrue);
    sfSprite_setPosition(buildings->sprite, buildings->pos);
    sfSprite_scale(buildings->sprite, buildings->resize);
    return (buildings);
}