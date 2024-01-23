//
// Created by Mohammad Mahdi Haeri on 1/23/24.
//

#ifndef FP_402_DEMO_PROJECT_GOTOXY_H
#define FP_402_DEMO_PROJECT_GOTOXY_H

#include "stdio.h"

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

//void gotoxy(int x,int y) {
//    printf("%c[%d;%df",0x1B,y,x);
//}

#endif //FP_402_DEMO_PROJECT_GOTOXY_H
