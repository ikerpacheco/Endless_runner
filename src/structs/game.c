/*
** EPITECH PROJECT, 2021
** game
** File description:
** game
*/

#include "../../include/my_runner.h"

t_game *init(t_game *game)
{
    game->floor = init_floor();
    game->floor2 = init_floor2();
    game->player = init_player();
    game->sound = init_sound();
    game->jump = init_jump();

    return game;
}

t_game *init_game(void)
{
    t_game *game = malloc(sizeof(t_game));

    game->background = init_background();
    game->background2 = init_background2();
    game->buildings = init_buildings();
    game->buildings2 = init_buildings2();
    game->horizon = init_horizon();
    game->horizon2 = init_horizon2();
    game->mid = init_mid();
    game->enemy = init_enemy();
    game->heart = init_heart((sfVector2f){850, 0});
    game->heart_2 = init_heart((sfVector2f){910, 0});
    game->heart_3 = init_heart((sfVector2f){970, 0});
    game->black_heart = init_black_heart();
    game->mid2 = init_mid2();
    game = init(game);

    return game;
}