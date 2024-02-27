/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** handle_options.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../include/my.h"

int handle_options(int ac, char **av)
{
    if (ac > 2 || my_strcmp(av[1], "-h") != 0) {
        my_puterr("Incorrect argument.\n");
        return 84;
    }
    my_printf("Welcome to MyHunter !\n\n");
    my_printf("Description\n");
    my_printf("\tMyHunter is a little game based on the rules ");
    my_printf("of Duck Hunt. \n\tA new bird appear when you reach a score of");
    my_printf(" 20, then 40, and so one...\n\tIf the bird leave the screen,");
    my_printf(" then try to restart the game.\n\n");
    my_printf("Available inputs (MENU)\n");
    my_printf("\t<CLICK>  : Interact with buttons.\n\n");
    my_printf("Available inputs (IN GAME)\n");
    my_printf("\t<CLICK>  : Shoot birds.\n");
    my_printf("\t<ESCAPE> : Pause the game and display the main-menu.\n");
    return 0;
}
