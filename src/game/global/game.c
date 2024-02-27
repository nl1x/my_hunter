/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** play.c
** Author: nathan.jeannot@epitech.eu
*/

#include <time.h>
#include "../../../include/game.h"

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    sfVideoMode mode = { GAME_WIDTH, GAME_HEIGHT, 8 };

    game->win = lx_win_new("Test", mode);
    game->delta_clock = lx_clock_new();
    game->dt = 1;
    sfRenderWindow_setFramerateLimit(game->win->object, FPS);
    srand(time(0));
    init_menu(game);
    init_play(game);
    return game;
}
