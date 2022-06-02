/*
** EPITECH PROJECT, 2021
** game
** File description:
** game
*/

#include "../my_runner.h"

#ifndef __GAME_H__
    #define __GAME_H__

    typedef struct s_game {
        t_background *background;
        t_player *player;
        t_floor *floor;
        t_buildings *buildings;
        t_horizon *horizon;
        t_mid *mid;
        t_floor2 *floor2;
        t_buildings2 *buildings2;
        t_mid2 *mid2;
        t_horizon2 *horizon2;
        t_background2 *background2;
        t_enemy *enemy;
        t_heart *heart;
        t_heart *heart_2;
        t_heart *heart_3;
        t_sound *sound;
        t_jump *jump;
        t_black_heart *black_heart;
    } t_game;

#endif /* !GAME_H_ */
