/*
** EPITECH PROJECT, 2021
** player
** File description:
** player
*/

#include "../../include/my_runner.h"

t_player *init_player(void)
{
    t_player *player = malloc(sizeof(t_player));

    player->texture = sfTexture_createFromFile(
    "media/character/woodcutter/run.png", NULL);
    player->sprite = sfSprite_create();
    player->resize = (sfVector2f){3, 3};
    player->rect = (sfIntRect){0, 0, 35, 50};
    player->space = 0;
    player->up = 0;
    player->counter = 0;
    player->numbers = 10;
    player->collision = 0;

    sfSprite_setTexture(player->sprite, player->texture, sfTrue);
    sfSprite_setPosition(player->sprite, (sfVector2f){100, 780});
    sfSprite_scale(player->sprite, player->resize);
    return (player);
}