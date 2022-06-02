/*
** EPITECH PROJECT, 2022
** jump
** File description:
** jump
*/

#include "../../include/my_runner.h"

t_game *jump(t_game *game, sfRenderWindow *window)
{
    if (game->player->position.y > 500 && game->player->up == 0) {
        game->player->position.y -= game->player->numbers;
        game->player->numbers -= 0.25;
    }
    if (game->player->position.y == 500)
        game->player->up = 1;
    if (game->player->position.y < 780 && game->player->up == 1) {
        game->player->position.y += game->player->numbers;
        game->player->numbers += 0.25;
    }
    if (game->player->position.y == 780) {
        game->player->space = 0;
        game->player->up = 0;
    }
    return game;
}