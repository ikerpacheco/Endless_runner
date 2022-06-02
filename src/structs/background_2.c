/*
** EPITECH PROJECT, 2021
** background 2
** File description:
** background_2
*/

#include "../../include/my_runner.h"

t_background2 *init_background2(void)
{
    t_background2 *background2 = malloc(sizeof(t_background2));

    background2->texture = sfTexture_createFromFile(
    "media/background/png/background/bright/sky.png", NULL);
    background2->sprite = sfSprite_create();
    background2->resize = (sfVector2f){1, 1};
    background2->pos = (sfVector2f){1920, 0};

    sfSprite_setTexture(background2->sprite, background2->texture, sfTrue);
    sfSprite_setPosition(background2->sprite, background2->pos);
    sfSprite_scale(background2->sprite, background2->resize);
    return (background2);
}