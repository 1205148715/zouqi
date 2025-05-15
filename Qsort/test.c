#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct Stu
//{
//	int age;
//	char name[10];
//};
//int cmp(const void* e1, const void* e2)//void* 是无类型指针，可以接受任意数据的地址
//{										//void* 不能进行解引用操作，也不能进行+-整数的操作
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp((((struct Stu*)e1)->name) , (((struct Stu*)e2)->name));//strcmp函数用于比较两个字符串
//}																		//e1>e2返回1，e1<e2返回-1，等于则返回0
//int main()
//{
//	struct Stu stu[3] = { {20,"zhangsan"},{10,"lishi"},{30,"wangwu"} };
//	int sz = sizeof(stu) / sizeof(stu[0]);
//	//qsort(stu, sz, sizeof(stu[0]), cmp);//参数一是首元素地址，参数二是元素个数，参数三是每个元素的大小
//										//参数四是比较方法，通过函数实现
//										//qsort的比较规则是进行比较的元素，第一个大于第二个返回>0的数
//										//第一个等于第二个返回=0的数
//										//第一个小于第二个返回<0的数
//
//
//
//	qsort(stu,sz,sizeof(stu[0]),cmp_name);
//	return 0;
//}



////自己编写代码实现Qsort函数
// struct Stu
//{
//	int age;
//	char name[10];
//};
// int cmp(void* e1,void* e2)
// {
//	 return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
// }
// void swap(void* a,void* b,int s)
// {
//	 int i = 0;
//	 for (i = 0; i < s; i++)//循环一次只能交换一个字节的字符，一个元素有多少字节就循环多少次
//	 {
//		 char temp = *((char*)a + i);
//		 *((char*)a + i) = *((char*)b + i);
//		 *((char*)b + i) = temp;
//	 }
// }
// void Bubble_Sort(void* base,int sz,int size,int (*cmp)(void* e1,void* e2))
// {
//	 int i = 0;
//	 for (i = 0; i < sz - 1; i++)//确定需要循环几趟
//	 {
//		 int j = 0;
//		 for (j = 0; j < sz - 1 - i; j++)//确定需要比较几对
//		 {
//			 if ((cmp(((char*)base)+j*size,(char*)base+(j+1)*size)) > 0)
//			 {
//				 swap(((char*)base) + j * size, (char*)base + (j + 1) * size,size);
//			 }
//		 }
//	 }
// }
// void test()
// {
//	 struct Stu stu[3] = { {20,"zhangsan"},{10,"lishi"},{30,"wangwu"}};
//	 int sz = sizeof(stu) / sizeof(stu[0]);
//	 Bubble_Sort(stu,sz,sizeof(stu[0]),cmp);
//	
// }
//int main()
//{
//	test();
//	return 0;
//}
//



//确定打印的值
int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16 a此时表示整个数组
	//printf("%d\n", sizeof(a + 0));//4 or 8,a为首元素地址，地址的大小为4/8个字节
	//printf("%d\n", sizeof(*a));//4 ,a表示首元素地址，*a为首元素
	//printf("%d\n", sizeof(a + 1));//4 or 8,a为首元素地址，加1表示第二个元素地址，地址大小为4或8
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4 or 8,a表示整个数组的地址，地址大小为4或8
	//printf("%d\n", sizeof(*&a));//16，a为整个数组的地址，解引用为整个数组
	//printf("%d\n", sizeof(&a + 1));//4 or 8,a为整个数组的地址，加1为跳过一个数组，但依然是数组地址
	//printf("%d\n", sizeof(&a[0]));//4,&a[0]表示首元素地址
	//printf("%d\n", sizeof(&a[0] + 1));//4，&a[0]表示首元素地址，加1为第二元素地址
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6，arr为整个数组
	//printf("%d\n", sizeof(arr + 0));//4or8,arr为首元素地址，地址大小为4/8个字节
	//printf("%d\n", sizeof(*arr));//1，arr为首元素地址
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4 or 8,&arr表示取出整个数组的地址
	//printf("%d\n", sizeof(&arr + 1));//4 or 8,arr为整个数组的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4or8,&arr[0]为首元素地址，加1为第二个元素地址
	//printf("%d\n", strlen(arr));//随机值，strlen从起始地址开始往后算遇到'\0'才停止
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err，传的值，但strlen是按照地址计算
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值，arr表示整个元素的地址
	//printf("%d\n", strlen(&arr + 1));//随机值-6，arr表示整个数组的地址，加1跳过一个素数组
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1，&arr[0]表示首元素地址，加1为第二个元素的地址
	//return 0;
}