#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stu
{
	int age;
	char name[10];
};
int cmp(const void* e1, const void* e2)//void* ��������ָ�룬���Խ����������ݵĵ�ַ
{										//void* ���ܽ��н����ò�����Ҳ���ܽ���+-�����Ĳ���
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_name(const void* e1, const void* e2)
{
	return strcmp((((struct Stu*)e1)->name) , (((struct Stu*)e2)->name));//strcmp�������ڱȽ������ַ���
}																		//e1>e2����1��e1<e2����-1�������򷵻�0
int main()
{
	struct Stu stu[3] = { {20,"zhangsan"},{10,"lishi"},{30,"wangwu"} };
	int sz = sizeof(stu) / sizeof(stu[0]);
	//qsort(stu, sz, sizeof(stu[0]), cmp);//����һ����Ԫ�ص�ַ����������Ԫ�ظ�������������ÿ��Ԫ�صĴ�С
										//�������ǱȽϷ�����ͨ������ʵ��
										//qsort�ıȽϹ����ǽ��бȽϵ�Ԫ�أ���һ�����ڵڶ�������>0����
										//��һ�����ڵڶ�������=0����
										//��һ��С�ڵڶ�������<0����



	qsort(stu,sz,sizeof(stu[0]),cmp_name);
	return 0;
}