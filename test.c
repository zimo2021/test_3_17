#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//����һ������  �������ˮ�ɻ�����ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153������  Ҳ����ʵ����λ����
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		int m = 0;
//		int n = 1;
//		ret = i;
//		//�ж�i��λ��
//		while (ret /= 10)
//		{
//			n++;
//		}
//		//�ж�
//		ret = i;
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			m += pow(ret % 10, n);
//			ret /=10;
//		}
//		if (i == m)
//		{
//			printf("%d ", i);//0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474  ����153 370 371 407 Ϊˮ�ɻ���
//		}
//	}
//	return 0;
//}
//дһ������  ��ӡһ������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);//n�����ϰ벿�ֳ��һ�����������
//	//��ӡ�ϰ���
//	for (i = 0; i < n + 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°���
//	for (i = 0; i <n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(n-i-1)+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ˮ��ĳ��ˮһԪһƿ��������ƿ���Զһ�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ
//ֱ����
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int empty = n;
//	sum = n;
//	while (empty >= 2)
//	{
//		sum += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}��������������������������������������������
//�۸����  һƿ��ˮ1Ԫ  ������ƿ��һƿ��ˮ  ��һ����ƿ0.5Ԫ  �����ƿ�����ˮΪ0.5Ԫ  �����һ����ʣ��һ����ƿ ���Կ��Ժȵ���ˮΪ2*money-1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 0)
//		printf("sum=0");
//	else
//		printf("sum=%d\n", 2 * n - 1);
//	return 0;
//}
//���һ����������һ����������������ǰ�棬ż�����ں���
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//����ʼ��һ��ż��
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//���ҿ�ʼ��һ������
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//����
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}
//��Ŀ
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);//�������������ͱ任  300 44
//	return 0;
//}������������������������������������������������
//��ӡһ���������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			//��һ
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i > 1 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}������������������������������������������������
/*
����Ϊ�ĸ����ɷ��Ĺ��� ����ֻ��һ����˵�˼ٻ� �ж�˭Ϊ �ﷸ
A��������
B����C
C: ��D
D: C�ں�˵
*/
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}��������������������������������������������������������
/*
��λ�˶�Ա�μ���10��̨��ˮ����������������˵������� ÿλѡ��ֻ˵����һ�룬���������˳��
A˵��B�ڶ� �ҵ���
B˵���ҵڶ� E����
C˵���ҵ�һ D����
D˵��C��� �ҵ���
E˵���ҵ��� A��һ
*/
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <=5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (
//							(b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1
//							)
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//��ת�ַ���
/*
ʵ��һ����������������k���ַ�
���磺
abcd����һ���ַ��õ�bcda
���������ַ��õ� cdab
*/
//������ⷨ
//void move(char* arr,int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//
//	for (i = 0; i < k; i++)
//	{
//		int tmp = *arr;
//		//�ƶ�һ���ַ���
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//������ת��
//void reverse(char* arr, int k)
//{
//	int left = 0;
//	int right = k-1;
//	while (left < right)
//	{
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//void move(char* arr,int k)
//{
//	int len = strlen(arr);
//	reverse(arr, k);
//	reverse(arr + k, len - k);
//	reverse(arr, len);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	move(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}������������������������������������������������
/*
дһ���ַ������жϸ��ַ����Ƿ�Ϊ��һ���ַ��������ַ���
��  cdefab Ϊabcdef�����ַ���
*/