#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)//因为i是无符号整形，无符号数的取值范围为0—255；不可能为负数，循环条件永远为真，所以死循环
//	{
//		printf("%u\n",i);
//	}
//	return 0;
//}
 
 
 
 
 
 
 
//int main()
//{
//	char arr[1000];//有符号char类型数组的取值范围是-128—127；
//	int i = 0;
//	for (i = 0;i<1000;i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d\n", strlen(arr));//arr数组里面放的是{-1,2，.....-128,127........1,0...}
//								//strlen函数计算数组长度是遇到'\0'也就是0停止，那么-1到-128是128个数，127到1是127个数
//	return 0;					//运行结果：128+127 = 255
//}



//unsigned char i = 0; //0-255
//int main()
//{
//	for (i = 0;i<=255;i++)
//	{
//		printf("heheheh\n");
//	}
//	//运行结果为死循环，因为无符号char类型的取值范围为0-255，循环条件永远为真
//}