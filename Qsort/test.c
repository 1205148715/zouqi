#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct Stu
//{
//	int age;
//	char name[10];
//};
//int cmp(const void* e1, const void* e2)//void* ��������ָ�룬���Խ����������ݵĵ�ַ
//{										//void* ���ܽ��н����ò�����Ҳ���ܽ���+-�����Ĳ���
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp((((struct Stu*)e1)->name) , (((struct Stu*)e2)->name));//strcmp�������ڱȽ������ַ���
//}																		//e1>e2����1��e1<e2����-1�������򷵻�0
//int main()
//{
//	struct Stu stu[3] = { {20,"zhangsan"},{10,"lishi"},{30,"wangwu"} };
//	int sz = sizeof(stu) / sizeof(stu[0]);
//	//qsort(stu, sz, sizeof(stu[0]), cmp);//����һ����Ԫ�ص�ַ����������Ԫ�ظ�������������ÿ��Ԫ�صĴ�С
//										//�������ǱȽϷ�����ͨ������ʵ��
//										//qsort�ıȽϹ����ǽ��бȽϵ�Ԫ�أ���һ�����ڵڶ�������>0����
//										//��һ�����ڵڶ�������=0����
//										//��һ��С�ڵڶ�������<0����
//
//
//
//	qsort(stu,sz,sizeof(stu[0]),cmp_name);
//	return 0;
//}



////�Լ���д����ʵ��Qsort����
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
//	 for (i = 0; i < s; i++)//ѭ��һ��ֻ�ܽ���һ���ֽڵ��ַ���һ��Ԫ���ж����ֽھ�ѭ�����ٴ�
//	 {
//		 char temp = *((char*)a + i);
//		 *((char*)a + i) = *((char*)b + i);
//		 *((char*)b + i) = temp;
//	 }
// }
// void Bubble_Sort(void* base,int sz,int size,int (*cmp)(void* e1,void* e2))
// {
//	 int i = 0;
//	 for (i = 0; i < sz - 1; i++)//ȷ����Ҫѭ������
//	 {
//		 int j = 0;
//		 for (j = 0; j < sz - 1 - i; j++)//ȷ����Ҫ�Ƚϼ���
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



//ȷ����ӡ��ֵ
int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16 a��ʱ��ʾ��������
	//printf("%d\n", sizeof(a + 0));//4 or 8,aΪ��Ԫ�ص�ַ����ַ�Ĵ�СΪ4/8���ֽ�
	//printf("%d\n", sizeof(*a));//4 ,a��ʾ��Ԫ�ص�ַ��*aΪ��Ԫ��
	//printf("%d\n", sizeof(a + 1));//4 or 8,aΪ��Ԫ�ص�ַ����1��ʾ�ڶ���Ԫ�ص�ַ����ַ��СΪ4��8
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4 or 8,a��ʾ��������ĵ�ַ����ַ��СΪ4��8
	//printf("%d\n", sizeof(*&a));//16��aΪ��������ĵ�ַ��������Ϊ��������
	//printf("%d\n", sizeof(&a + 1));//4 or 8,aΪ��������ĵ�ַ����1Ϊ����һ�����飬����Ȼ�������ַ
	//printf("%d\n", sizeof(&a[0]));//4,&a[0]��ʾ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4��&a[0]��ʾ��Ԫ�ص�ַ����1Ϊ�ڶ�Ԫ�ص�ַ
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6��arrΪ��������
	//printf("%d\n", sizeof(arr + 0));//4or8,arrΪ��Ԫ�ص�ַ����ַ��СΪ4/8���ֽ�
	//printf("%d\n", sizeof(*arr));//1��arrΪ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4 or 8,&arr��ʾȡ����������ĵ�ַ
	//printf("%d\n", sizeof(&arr + 1));//4 or 8,arrΪ��������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4or8,&arr[0]Ϊ��Ԫ�ص�ַ����1Ϊ�ڶ���Ԫ�ص�ַ
	//printf("%d\n", strlen(arr));//���ֵ��strlen����ʼ��ַ��ʼ����������'\0'��ֹͣ
	//printf("%d\n", strlen(arr + 0));//���ֵ
	////printf("%d\n", strlen(*arr));//err������ֵ����strlen�ǰ��յ�ַ����
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ��arr��ʾ����Ԫ�صĵ�ַ
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6��arr��ʾ��������ĵ�ַ����1����һ��������
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1��&arr[0]��ʾ��Ԫ�ص�ַ����1Ϊ�ڶ���Ԫ�صĵ�ַ
	//return 0;
}