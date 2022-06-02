/*
** EPITECH PROJECT, 2021
** sound.c
** File description:
** sound
*/

#include "../../include/my_runner.h"

t_jump *init_jump(void)
{
    t_jump *jump = malloc(sizeof(t_jump));

    jump->buff = sfSoundBuffer_createFromFile("media/sounds/jump.wav");
    jump->sound = sfSound_create();

    sfSound_setBuffer(jump->sound, jump->buff);
    sfSound_setVolume(jump->sound, 30);
    return (jump);
}