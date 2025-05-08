#include "game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i<=col;i++)
	{
		printf("%d",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c",board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int Get_mine_count(char mine[ROWS][COLS],int x, int y)
{
		return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1]-8*'0';
}
void pailei(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int let = Get_mine_count(mine, x, y);
		if (let == 0&& show[x][y] == '*')
		{
				int i = 0;
				int j = 0;
				show[x][y] = ' ';
				for (i = x - 1; i <= x + 1; i++)
				{
					for (j = y - 1; j <= y + 1; j++)
					{		if(i>=1&&j>=1&&i<=ROW&&j<=COL)
							pailei(mine, show, i, j);
					}
				}
			
			
		}
		else if (let != 0)
		{
			show[x][y] = let + '0';
		}
	
}
void Finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - COUNT)
	{
		printf("请输入坐标:\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被雷炸了\n");
				Displayboard(mine,ROW,COL);
				break;
			}
			else if (show[x][y] != '*')
			{
				printf("坐标已被查找\n");
				continue;
			}
			else
			{
				
				pailei(mine,show,x,y);
				Displayboard(show,row,col);
				win++;
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入：");
		}
	}
	if (win == row*col - COUNT)
	{
		printf("恭喜你，排雷成功\n");
		Displayboard(mine,row,col);
	}

}