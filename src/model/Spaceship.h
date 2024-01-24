//
// Created by Mohammad Mahdi Haeri on 1/24/24.
//

#ifndef FP_402_DEMO_PROJECT_SPACESHIP_H
#define FP_402_DEMO_PROJECT_SPACESHIP_H

typedef struct {
    int x;
    int y;
    char *shape;
} Spaceship;

void spaceship_constructor(Spaceship *spaceship) {
    spaceship->shape =
            "                  /\\\n"
            "                 |^^|\n"
            "                 |{}|\n"
            "  _______________/~~\\________________\n"
            " /               |  |                \\\n"
            "`========--------.  .---------========'\n"
            "                 ||||\n"
            "                  ||\n"
            "                  ||\n"
            "                  ||\n"
            "                  ||\n"
            "              ,---||---,\n"
            "              '---<>---'";
}

#endif //FP_402_DEMO_PROJECT_SPACESHIP_H
