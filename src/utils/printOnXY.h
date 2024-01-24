//
// Created by Mohammad Mahdi Haeri on 1/23/24.
//

#ifndef FP_402_DEMO_PROJECT_PRINTONXY_H
#define FP_402_DEMO_PROJECT_PRINTONXY_H

#include "gotoxy.h"
#include "string.h"


void printOnXY(int x, int y, const char str[]) {
    int line = 0;
    move(y, x); // Corrected the order of parameters

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            line++;
            move(y + line, x); // Move to the next line
        } else {
            addch(str[i]);
        }
    }

    refresh();
}

#endif //FP_402_DEMO_PROJECT_PRINTONXY_H
