#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 10
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void play();
void Initboard(char board[ROWS][COLS],int rows,int cols,char set);
void Displayboard(char board[ROWS][COLS],int row,int col);
void Setmine(char board[ROWS][COLS],int row,int col);
void Finemine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int Get_mine_count(char mine[ROWS][COLS], int x, int y);	