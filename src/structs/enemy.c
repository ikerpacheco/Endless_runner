/*
** EPITECH PROJECT, 2022
** enemy
** File description:
** enemy
*/

#include "../../include/my_runner.h"

t_enemy *init_enemy(void)
{
    t_enemy *enemy = malloc(sizeof(t_enemy));

    enemy->texture = sfTexture_createFromFile(
    "media/spritesheet.png", NULL);
    enemy->sprite = sfSprite_create();
    enemy->resize = (sfVector2f){1.2, 1.2};
    enemy->rect = (sfIntRect){0, 0, 180, 120};
    enemy->pos = (sfVector2f){0, 0};

    sfSprite_setTexture(enemy->sprite, enemy->texture, sfTrue);
    sfSprite_setPosition(enemy->sprite, (sfVector2f){1500, 780});
    sfSprite_scale(enemy->sprite, enemy->resize);
    return (enemy);
}