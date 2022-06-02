/*
** EPITECH PROJECT, 2022
** reset_floor
** File description:
** reset_floor
*/

#include "../include/my_runner.h"

void reset_floor(sfRenderWindow *window, t_game *game)
{
    sfVector2f pos1 = sfSprite_getPosition(game->floor->sprite);
    sfVector2f pos2 = sfSprite_getPosition(game->floor2->sprite);

    if (pos1.x <= -1920) {
        game->floor->pos.x = 1910;
        sfSprite_setPosition(game->floor->sprite, game->floor->pos);
    } else if (pos2.x <= -1920) {
        game->floor2->pos.x = 1910;
        sfSprite_setPosition(game->floor2->sprite, game->floor2->pos);
    }
    sfRenderWindow_drawSprite(window, game->floor->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->floor2->sprite, NULL);
}