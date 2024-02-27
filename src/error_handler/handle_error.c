/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** handle_error.c
** Author: nathan.jeannot@epitech.eu
*/

#include <fcntl.h>
#include <unistd.h>
#include "game.h"

static
int file_exists(char const *file)
{
    int fd = open(file, O_RDONLY);

    if (fd == -1)
        return 0;
    close(fd);
    return 1;
}

int handle_errors(void)
{
    if (!file_exists(QUIT_BTN_PATH) || !file_exists(PLAY_BTN_PATH)
    || !file_exists(BIRD_PATH) || !file_exists(DOG_PATH) ||
    !file_exists(MENU_BG_PATH) || !file_exists(PLAY_BG_PATH)) {
        my_puterr("Error: Missing assets");
        return 84;
    }
    return 0;
}
