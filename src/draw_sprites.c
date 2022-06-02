/*
** EPITECH PROJECT, 2021
** draw_srpites
** File description:
** draw_sprites
*/

#include "../include/my_runner.h"

void reset_background(sfRenderWindow *window, t_game *game)
{
    sfVector2f pos1 = sfSprite_getPosition(game->background->sprite);
    sfVector2f pos2 = sfSprite_getPosition(game->background2->sprite);

    if (pos1.x <= -1920) {
        game->background->pos.x = 1920;
        sfSprite_setPosition(game->background->sprite, game->background->pos);
    } else if (pos2.x <= -1920) {
        game->background2->pos.x = 1920;
        sfSprite_setPosition(game->background2->sprite, game->background2->pos);
    }
    sfRenderWindow_drawSprite(window, game->background->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->background2->sprite, NULL);
}

void reset_horizon(sfRenderWindow *window, t_game *game)
{
    sfVector2f pos1 = sfSprite_getPosition(game->horizon->sprite);
    sfVector2f pos2 = sfSprite_getPosition(game->horizon2->sprite);

    if (pos1.x <= -1920) {
        game->horizon->pos.x = 1920;
        sfSprite_setPosition(game->horizon->sprite, game->horizon->pos);
    } else if (pos2.x <= -1920) {
        game->horizon2->pos.x = 1920;
        sfSprite_setPosition(game->horizon2->sprite, game->horizon2->pos);
    }
    sfRenderWindow_drawSprite(window, game->horizon->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->horizon2->sprite, NULL);
}

void reset_mid(sfRenderWindow *window, t_game *game)
{
    sfVector2f pos1 = sfSprite_getPosition(game->mid->sprite);
    sfVector2f pos2 = sfSprite_getPosition(game->mid2->sprite);

    if (pos1.x <= -1920) {
        game->mid->pos.x = 1910;
        sfSprite_setPosition(game->mid->sprite, game->mid->pos);
    } else if (pos2.x <= -1920) {
        game->mid2->pos.x = 1910;
        sfSprite_setPosition(game->mid2->sprite, game->mid2->pos);
    }
    sfRenderWindow_drawSprite(window, game->mid->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->mid2->sprite, NULL);
}

void reset_enemy(sfRenderWindow *window, t_game *game)
{
    sfVector2f pos1 = sfSprite_getPosition(game->enemy->sprite);

    if (pos1.x <= -300) {
        game->enemy->pos.x = (rand() % (5760 - 1920 + 1) + 0);
        game->enemy->pos.y = 780;
        sfSprite_setPosition(game->enemy->sprite, game->enemy->pos);
    }
    sfRenderWindow_drawSprite(window, game->enemy->sprite, NULL);
}

void draw_sprites(sfRenderWindow *window, t_game *game)
{
    reset_background(window, game);
    reset_horizon(window, game);
    reset_buildings(window, game);
    reset_mid(window, game);
    reset_floor(window, game);
    reset_enemy(window, game);

    sfRenderWindow_drawSprite(window, game->player->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->heart->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->heart_2->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->heart_3->sprite, NULL);
}