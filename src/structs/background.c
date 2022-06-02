/*
** EPITECH PROJECT, 2021
** background_strcut
** File description:
** backgorund
*/

#include "../../include/my_runner.h"

t_background *init_background(void)
{
    t_background *background = malloc(sizeof(t_background));

    background->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/sky.png", NULL);
    background->sprite = sfSprite_create();
    background->resize = (sfVector2f){1, 1};
    background->pos = (sfVector2f){0, 0};

    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
    sfSprite_setPosition(background->sprite, background->pos);
    sfSprite_scale(background->sprite, background->resize);
    return (background);
}