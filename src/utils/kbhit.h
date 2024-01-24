//
// Created by Mohammad Mahdi Haeri on 1/23/24.
//

#ifndef FP_402_DEMO_PROJECT_KBHIT_H
#define FP_402_DEMO_PROJECT_KBHIT_H

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    // Get the current terminal settings
    tcgetattr(STDIN_FILENO, &oldt);

    // Save the current terminal settings
    newt = oldt;

    // Disable canonical mode and echo
    newt.c_lflag &= ~(ICANON | ECHO);

    // Set the new terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // Get file status flags
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);

    // Set non-blocking mode
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    // Check for input
    ch = getchar();

    // Reset terminal settings and file status flags
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

#endif //FP_402_DEMO_PROJECT_KBHIT_H
