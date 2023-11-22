#include "levels.h"
#include "game.h"
#include <ncurses.h>

void splash_screen(){
    
    if (has_colors()){
        init_pair(1, COLOR_GREEN, COLOR_BLACK);
        attron(COLOR_PAIR(1));
        printw("___  ___               ______\n");            
        printw("|  \\/  |               | ___ \\\n");
        printw("| .  . | __ _ _______  | |_/ /   _ _ __  \n");
        printw("| |\\/| |/ _` |_  / _ \\ |    / | | | '_ \\\n");
        printw("| |  | | (_| |/ /  __/ | |\\ \\ |_| | | | |\n");
        printw("\\_|  |_/\\__,_/___\\___| \\_| \\_\\__,_|_| |_|\n");
        attroff(COLOR_PAIR(1));
        printw("\nEscape the maze.\n");
        printw("Arrow keys to move, SPACE to attack and Q to use items");
        printw("\npress any key to continue.....");
        refresh();
        int ch;
        /*
        while((ch = getch()) == err()){
            printw("\npress any key to continue...");
            refresh();
        }
        */
    }
    return;
}