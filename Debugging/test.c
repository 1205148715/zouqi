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
//������� ʵ����!1+!2.....+!n.���������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	//int ret = 1;	//ԭ�����ڼ���ʱ���ӵ�һ��ѭ�����뵽�ڶ���ѭ��ʱ��ret�������ϴεļ����ֵ
//	scanf("%d",&n);	//�����ڽ���ڶ���ѭ��ǰ�Ȱ�ret����Ϊ1.
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


//ʵ�ֿ⺯����strcpy�Ĺ���
//char* copy(char* arr1, const char* arr2)//����const��ֹԭ���ݱ��ı�
//{
//	char* ret = arr1;
//	assert(arr2!=NULL);
//	assert(arr1 != NULL);//��ֹ����Ϊ��ָ��
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