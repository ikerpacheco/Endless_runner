/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** my_runner
*/

#include "../include/my_runner.h"

void analyse_events(sfRenderWindow *window, sfEvent event, t_game *game)
{
    game->player->position = sfSprite_getPosition(game->player->sprite);
    game->player->gravity = (sfVector2f){0, 10};
    game->player->velocity = (sfVector2f){0, 0};

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeySpace &&
            game->player->position.y >= 780) {
            sfSound_play(game->jump->sound);
            game->player->space = 1;
            game->player->numbers = 10;
        }
    }
    if (game->player->space == 1) {
        game = jump(game, window);
        sfSprite_setPosition(game->player->sprite, game->player->position);
    }
}

int check_usage(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n");
        my_putstr("The objective of the game (MyRunner) ");
        my_putstr("is to avoid the obstacles that");
        my_putstr(" appear on the screen.\n");
        my_putstr("If the player hits an enemy, their lose a heart.\n");
        my_putstr("The game ends when:\n");
        my_putstr("    - The player runs out of hearts.\n");
        my_putstr("HAVE FUN!\n");
        return 84;
    } else if (ac == 2)
        return 84;
    if (ac > 2)
        return 84;
}

void sprite_movement(t_game *game)
{
    sfVector2f movement1 = {-8.7, 0};
    sfVector2f movement3 = {-9.7, 0};
    sfVector2f movement4 = {-9, 0};
    sfVector2f movement5 = {-11.2, 0};
    sfVector2f movement2 = {-12.2, 0};
    sfVector2f movement6 = {-11, 0};

    sfSprite_move(game->background->sprite, movement1);
    sfSprite_move(game->background2->sprite, movement1);
    sfSprite_move(game->buildings->sprite, movement3);
    sfSprite_move(game->buildings2->sprite, movement3);
    sfSprite_move(game->horizon->sprite, movement4);
    sfSprite_move(game->horizon2->sprite, movement4);
    sfSprite_move(game->mid->sprite, movement5);
    sfSprite_move(game->enemy->sprite, movement6);
    sfSprite_move(game->mid2->sprite, movement5);
    sfSprite_move(game->floor->sprite, movement2);
    sfSprite_move(game->floor2->sprite, movement2);
}

void my_runner(void)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(video_mode, "MyWindow",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    t_game *game = init_game();
    sfClock *clock = sfClock_create();
    sfEvent event;
    sfMusic *music = sfMusic_createFromFile("media/sounds/music.wav");
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
    sfMusic_setVolume(music, 10);
    sfTime time;

    while (sfRenderWindow_isOpen(window)) {
        draw_sprites(window, game);
        sprite_movement(game);
        analyse_events(window, event, game);
        sfRenderWindow_display(window);
        sfSprite_setTextureRect(game->player->sprite, game->player->rect);
        sfSprite_setTextureRect(game->enemy->sprite, game->enemy->rect);
        check_crash(game, window);
        loop_movement_player(clock, time, &game->player->rect,
                            &game->enemy->rect);
    }
}

int main (int ac, char **av)
{
    if (check_usage(ac, av) == 84)
        return 84;
    my_runner();
    return 0;
}