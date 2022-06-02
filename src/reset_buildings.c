/*
** EPITECH PROJECT, 2022
** reset_floor
** File description:
** reset_floor
*/

#include "../include/my_runner.h"

void reset_buildings(sfRenderWindow *window, t_game *game)
{
    sfVector2f pos1 = sfSprite_getPosition(game->buildings->sprite);
    sfVector2f pos2 = sfSprite_getPosition(game->buildings2->sprite);

    if (pos1.x <= -1920) {
        game->buildings->pos.x = 1900;
        sfSprite_setPosition(game->buildings->sprite, game->buildings->pos);
    } else if (pos2.x <= -1920) {
        game->buildings2->pos.x = 1900;
        sfSprite_setPosition(game->buildings2->sprite, game->buildings2->pos);
    }
    sfRenderWindow_drawSprite(window, game->buildings->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->buildings2->sprite, NULL);
}