/*
** EPITECH PROJECT, 2023
** bsmyhunter
** File description:
** main.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../include/my.h"
#include "../include/game.h"

int main(int ac, char **av)
{
    game_t *game;

    if (ac >= 2)
        return handle_options(ac, av);
    else if (handle_errors() == 84)
        return 84;
    game = init_game();
    gameloop(game);
    return 0;
}
