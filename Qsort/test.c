#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stu
{
	int age;
	char name[10];
};
int cmp(const void* e1, const void* e2)//void* 是无类型指针，可以接受任意数据的地址
{										//void* 不能进行解引用操作，也不能进行+-整数的操作
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_name(const void* e1, const void* e2)
{
	return strcmp((((struct Stu*)e1)->name) , (((struct Stu*)e2)->name));//strcmp函数用于比较两个字符串
}																		//e1>e2返回1，e1<e2返回-1，等于则返回0
int main()
{
	struct Stu stu[3] = { {20,"zhangsan"},{10,"lishi"},{30,"wangwu"} };
	int sz = sizeof(stu) / sizeof(stu[0]);
	//qsort(stu, sz, sizeof(stu[0]), cmp);//参数一是首元素地址，参数二是元素个数，参数三是每个元素的大小
										//参数四是比较方法，通过函数实现
										//qsort的比较规则是进行比较的元素，第一个大于第二个返回>0的数
										//第一个等于第二个返回=0的数
										//第一个小于第二个返回<0的数



	qsort(stu,sz,sizeof(stu[0]),cmp_name);
	return 0;
}