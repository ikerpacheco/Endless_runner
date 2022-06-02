/*
** EPITECH PROJECT, 2021
** loop_movement
** File description:
** loop_movement
*/

#include "../include/my_runner.h"

void loop_movement_player(sfClock *clock, sfTime time,
                        sfIntRect *rect1, sfIntRect *rect2)
{
    float seconds = 0;
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds >= 0.14) {
        move_rect(rect1, 50, 200);
        move_rect(rect2, 180, 1260);
        sfClock_restart(clock);
    }
}