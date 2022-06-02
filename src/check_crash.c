/*
** EPITECH PROJECT, 2022
** check_crash.c
** File description:
** check_crash
*/

#include "../include/my_runner.h"

void third_case(t_game *game, sfRenderWindow *window)
{
    sfSprite_setTexture(game->heart->sprite, game->black_heart->texture,
    sfTrue);
    sfRenderWindow_drawSprite(window, game->heart->sprite, NULL);
    game->player->collision = 1;
    sfSound_play(game->sound->sound);
    sfRenderWindow_close(window);
}

void second_case(t_game *game, sfRenderWindow *window)
{
    sfSprite_setTexture(game->heart_2->sprite, game->black_heart->texture,
    sfTrue);
    sfRenderWindow_drawSprite(window, game->heart_2->sprite, NULL);
    game->player->counter = 2;
    game->player->collision = 1;
    sfSound_play(game->sound->sound);
}

void first_case(t_game *game, sfRenderWindow *window)
{
    sfSprite_setTexture(game->heart_3->sprite, game->black_heart->texture,
    sfTrue);
    sfRenderWindow_drawSprite(window, game->heart_3->sprite, NULL);
    game->player->counter = 1;
    game->player->collision = 1;
    sfSound_play(game->sound->sound);
}

int first_heart(t_game *game, sfRenderWindow *window, sfVector2f pos1,
                sfVector2f pos2)
{
    if ((((pos1.x + 17.5) >= (pos2.x - 90) && (pos1.x + 17.5) <= (pos2.x + 90))
    && (pos1.y + 25) >= (pos2.y - 60)) && game->player->counter == 0 &&
    game->player->collision == 0) {
        first_case(game, window);
        return 4;
    }
}

void check_crash(t_game *game, sfRenderWindow *window)
{
    sfVector2f pos1 = sfSprite_getPosition(game->player->sprite);
    sfVector2f pos2 = sfSprite_getPosition(game->enemy->sprite);

    if ((((pos1.x + 17.5) >= (pos2.x - 90) && (pos1.x + 17.5) <= (pos2.x + 90))
    && (pos1.y + 25) >= (pos2.y - 60)) && game->player->counter == 2 &&
    game->player->collision == 0) {
        third_case(game, window);
        return;
    }
    if ((((pos1.x + 17.5) >= (pos2.x - 90) && (pos1.x + 17.5) <= (pos2.x + 90)
    && (pos1.y + 25) >= (pos2.y - 60))) && game->player->counter == 1 &&
    game->player->collision == 0) {
        second_case(game, window);
        return;
    }
    if (first_heart(game, window, pos1, pos2) == 4)
        return;
    if ((pos1.x + 17.5) >= (pos2.x + 150))
        game->player->collision = 0;
}