/*
** EPITECH PROJECT, 2021
** sound.c
** File description:
** sound
*/

#include "../../include/my_runner.h"

t_sound *init_sound(void)
{
    t_sound *sound = malloc(sizeof(t_sound));

    sound->buff = sfSoundBuffer_createFromFile("media/sounds/collision.wav");
    sound->sound = sfSound_create();

    sfSound_setBuffer(sound->sound, sound->buff);
    sfSound_setVolume(sound->sound, 100);
    return (sound);
}