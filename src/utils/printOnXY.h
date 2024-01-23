//
// Created by Mohammad Mahdi Haeri on 1/23/24.
//

#ifndef FP_402_DEMO_PROJECT_PRINTONXY_H
#define FP_402_DEMO_PROJECT_PRINTONXY_H

#include "gotoxy.h"
#include "string.h"


void printOnXY(int x, int y, char str[]) {
    int line = 0;
    gotoxy(x, y);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            line++;
            gotoxy(x, y + line);
        } else {
            printf("%c", str[i]);
        }
    }
}

#endif //FP_402_DEMO_PROJECT_PRINTONXY_H
