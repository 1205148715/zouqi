#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <assert.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,1,1,1,1,1,1,1,1,1};
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//错误代码 实现求!1+!2.....+!n.不考虑溢出
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	//int ret = 1;	//原因是在计算时，从第一层循环进入到第二层循环时，ret保留了上次的计算的值
//	scanf("%d",&n);	//所以在进入第二层循环前先把ret重置为1.
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//实现库函数，strcpy的功能
//char* copy(char* arr1, const char* arr2)//加上const防止原内容被改变
//{
//	char* ret = arr1;
//	assert(arr2!=NULL);
//	assert(arr1 != NULL);//防止输入为空指针
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//	
//}
//int main()
//{
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	printf("%s\n", copy(arr1, arr2));
//	return 0;
//}