#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h> // for usleep
#include "utils/gotoxy.h"

int main() {
    initscr(); // Initialize the curses library
    keypad(stdscr, TRUE); // Enable special keys
    nodelay(stdscr, TRUE); // Non-blocking input

    return 0;
}
