#define MAX_WIDTH 100
#define MAX_HEIGHT 100

#ifndef GAME_H
#define GAME_H

void readMazeFromFile(char maze[MAX_HEIGHT][MAX_WIDTH], int *rows, int *cols, const char *filename);
void drawMaze(WINDOW *win, char maze[MAX_HEIGHT][MAX_WIDTH], int rows, int cols);
void splash_screen();
void printFileContents(FILE *file, WINDOW *win);

#endif