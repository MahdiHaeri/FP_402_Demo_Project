//
// Created by Mohammad Mahdi Haeri on 1/24/24.
//

#ifndef FP_402_DEMO_PROJECT_SPACESHIP_H
#define FP_402_DEMO_PROJECT_SPACESHIP_H

typedef struct {
    int x;
    int y;
    int health;
    int x_velocity;
    int y_velocity;
    const char *shape;
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

//    spaceship->shape =
//            "       !\n"
//            "       !\n"
//            "       ^\n"
//            "      / \\\n"
//            "     /___\\\n"
//            "    |=   =|\n"
//            "    |     |\n"
//            "    |     |\n"
//            "    |     |\n"
//            "    |     |\n"
//            "    |     |\n"
//            "    |     |\n"
//            "    |     |\n"
//            "    |     |\n"
//            "    |     |\n"
//            "   /|##!##|\\\n"
//            "  / |##!##| \\\n"
//            " /  |##!##|  \\\n"
//            "|  / ^ | ^ \\  |\n"
//            "| /  ( | )  \\ |\n"
//            "|/   ( | )   \\|\n"
//            "    ((   ))\n"
//            "   ((  :  ))\n"
//            "   ((  :  ))\n"
//            "    ((   ))\n"
//            "     (( ))\n"
//            "      ( )\n"
//            "       .\n"
//            "       .\n"
//            "       .";


//    spaceship->shape =
//           "       -][][-\n"
//           "       /++++\\\n"
//           "      /OOOOOO\\\n"
//           ".=====!oooooo!=====.\n"
//           " \\____\\_-_-_-/____/\n"
//           "      |<><><>|\n"
//           "       \\    /\n"
//           "      ./\\ |/\\.\n"
//           "     ./  ^|  \\.\n"
//           "     /\"   |  \"\\\n"
//           "   ^^^   ^^^  ^^^";

//    spaceship->shape =
//            "        //-A-\\\\\n"
//            "  ___---=======---___\n"
//            "(=__\\   /.. ..\\   /__=)\n"
//            "     ---\\__O__/---";

//    spaceship->shape =
//            "        |\n"
//            "       / \\\n"
//            "      / _ \\\n"
//            "     |.o '.|\n"
//            "     |'._.'|\n"
//            "     |     |\n"
//            "   ,'|  |  |`.\n"
//            "  /  |  |  |  \\\n"
//            "  |,-'--|--'-.| ";

    spaceship->x = getmaxx(stdscr) / 2;
    spaceship->y = getmaxy(stdscr) / 2;
    spaceship->health = 100;
    spaceship->x_velocity = 0;
    spaceship->y_velocity = 0;
}

#endif //FP_402_DEMO_PROJECT_SPACESHIP_H
