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
		printf("�밴�ղ˵�ѡ�����룺\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ");
			break;
		case 1:
			play();
			break;
		default:
			printf("�����������������\n");
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