//
// Created by Mohammad Mahdi Haeri on 1/23/24.
//

#ifndef FP_402_DEMO_PROJECT_PRINTONXY_H
#define FP_402_DEMO_PROJECT_PRINTONXY_H

#include "gotoxy.h"
#include "string.h"


void printOnXY(int x, int y, const char str[]) {
    int column = 0;
    int row = 0;
    int max_x, max_y;

    getmaxyx(stdscr, max_y, max_x); // Get the dimensions of the window

    move(y, x); // Corrected the order of parameters

    for (int i = 0; i < strlen(str); i++) {
        if (y + row >= max_y) {
            break;
        }
        if (x + column >= max_x) {
            continue;
        }
        if (str[i] == '\n') {
            row++;
            move(y + row, x); // Move to the next line
            column = 0;
        } else {
            move(y + row, x + column); // Move to the next column
            addch(str[i]);
            column++;
        }
    }

    refresh();
}

#endif //FP_402_DEMO_PROJECT_PRINTONXY_H
