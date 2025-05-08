#include "game.h"
void menu()
{
	printf("###################################\n");
	printf("######### 1    play    ############\n");
	printf("######### 0    exit    ############\n");
	printf("###################################\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请按照菜单选项输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏");
			break;
		case 1:
			play();
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
void play()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show,ROWS,COLS,'*');
	//Displayboard(mine,ROW,COL);
	Displayboard(show,ROW,COL);
	Setmine(mine,ROW,COL);
	Displayboard(mine, ROW, COL);
	Finemine(mine,show,ROW,COL);
}
int main()
{
	test();
	return 0;
}