#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for usleep
#include "utils/printOnXY.h"
#include "utils/kbhit.h"
#include "model/Spaceship.h"
#include <ncurses.h>
#include <stdbool.h>

int main() {
    initscr(); // Initialize the curses library
    keypad(stdscr, TRUE); // Enable special keys
    nodelay(stdscr, TRUE); // Non-blocking input
//    halfdelay(10); // Non-blocking input

    start_color(); // Enable colors
    init_pair(1, COLOR_RED, COLOR_BLACK); // Initialize color pair 1
    init_pair(2, COLOR_GREEN, COLOR_BLACK); // Initialize color pair 2

    curs_set(0); // Set cursor visibility to 0 (invisible)

    refresh(); // Refresh the screen

//    idlok(stdscr, TRUE); // Enable line insertion and deletion
//    idcok(stdscr, TRUE); // Enable deletion of lines cleared with erase

//    clearok(stdscr, TRUE); // Allow the use of clear
//    leaveok(stdscr, TRUE); // Don't update cursor position
//    immedok(stdscr, TRUE); // Update screen after each getch(
//    scrollok(stdscr, TRUE); // Enable scrolling

//    A_NORMAL        Normal display (no highlight)
//    A_STANDOUT      Best highlighting mode of the terminal.
//            A_UNDERLINE     Underlining
//    A_REVERSE       Reverse video
//    A_BLINK         Blinking
//    A_DIM           Half bright
//    A_BOLD          Extra bright or bold
//    A_PROTECT       Protected mode
//    A_INVIS         Invisible or blank mode
//    A_ALTCHARSET    Alternate character set
//    A_CHARTEXT      Bit-mask to extract a character
//    COLOR_PAIR(n)   Color-pair number

// ---------------------------------------

//    COLOR_BLACK
//    COLOR_RED
//    COLOR_GREEN
//    COLOR_YELLOW
//    COLOR_BLUE
//    COLOR_MAGENTA
//    COLOR_CYAN
//    COLOR_WHITE
//

//    cbreak(); // Disable line buffering
//    raw(); // Disable line buffering and erase/kill character-processing
    noecho(); // Disable echoing of characters

    // clrtoeol(); // Clear to the end of line
    // clrtobot(); // Clear to the end of screen
    // erase(); // Clear the screen
    // clear(); // Clear the screen

    Spaceship spaceship;
    spaceship_constructor(&spaceship);
    char c;
    bool quit = false;
    while (!quit) {
        if (kbhit()) {
            c = getch();
            switch (c) {
                case 'w':
                    spaceship.y_velocity = -1;
                    break;
                case 's':
                    spaceship.y_velocity = 1;
                    break;
                case 'a':
                    spaceship.x_velocity = -2;
                    break;
                case 'd':
                    spaceship.x_velocity = 2;
                    break;
                case 'q':
                    quit = true;
                    break;
                default:
                    spaceship.x_velocity = 0;
                    spaceship.y_velocity = 0;
                    break;
            }
        }
        spaceship.x += spaceship.x_velocity;
        spaceship.y += spaceship.y_velocity;
        attron(COLOR_PAIR(1));
        printOnXY(spaceship.x, spaceship.y, spaceship.shape);
        attroff(COLOR_PAIR(1));
        usleep(20000);
//        erase();
        clear();
        box(stdscr, (int)'+', (int)'-');
        refresh();
    }

    endwin(); // End curses mode

    return 0;
}