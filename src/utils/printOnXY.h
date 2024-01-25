//
// Created by Mohammad Mahdi Haeri on 1/23/24.
//

#ifndef FP_402_DEMO_PROJECT_PRINTONXY_H
#define FP_402_DEMO_PROJECT_PRINTONXY_H

#include "string.h"
#include <stdbool.h>
#include <ncurses.h>


void printOnXY(int x, int y, const char str[]) {
    int column = 0;
    int row = 0;
    int max_x, max_y;
    int min_x, min_y;
    bool is_unused_space = true;

    getmaxyx(stdscr, max_y, max_x); // Get the dimensions of the window
    getbegyx(stdscr, min_y, min_x); // Get the starting position of the window

    move(y, x); // Corrected the order of parameters

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            is_unused_space = true;
            row++;
            column = 0;
            move(y + row, x); // Move to the next line
        } else if (x + column >= max_x || x + column < min_x || y + row >= max_y || y + row < min_y) {
            if (str[i] != ' ') {
                is_unused_space = false;
            }
            column++;
            continue;
        } else if (is_unused_space && str[i] == ' ') {
            column++;
            continue;
        } else {
            is_unused_space = false;
            move(y + row, x + column); // Move to the next column
            addch(str[i]);
            column++;
        }
    }

    refresh();
}

#endif //FP_402_DEMO_PROJECT_PRINTONXY_H
