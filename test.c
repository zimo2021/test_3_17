#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//创建一个函数  可以算出水仙花数（水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身（例如：1^3 + 5^3+ 3^3 = 153）。）  也可以实现四位数等
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
//		//判断i的位数
//		while (ret /= 10)
//		{
//			n++;
//		}
//		//判断
//		ret = i;
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			m += pow(ret % 10, n);
//			ret /=10;
//		}
//		if (i == m)
//		{
//			printf("%d ", i);//0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474  其中153 370 371 407 为水仙花数
//		}
//	}
//	return 0;
//}
//写一串代码  打印一个菱形
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);//n代表上半部分除最长一行以外的行数
//	//打印上半行
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
//	//打印下半行
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
//喝汽水：某汽水一元一瓶，两个空瓶可以兑换一瓶汽水，则20元最多可以喝多少瓶汽水
//直接求
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
//}——————————————————————
//价格代换  一瓶汽水1元  两个空瓶抵一瓶汽水  则一个空瓶0.5元  则除空瓶外的汽水为0.5元  但最后一定会剩余一个空瓶 所以可以喝的汽水为2*money-1
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
//设计一个函数，将一个数组中奇数排在前面，偶数排在后面
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
//		//从左开始找一个偶数
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右开始找一个奇数
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//交换
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
//题目
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);//包括整形提升和变换  300 44
//	return 0;
//}————————————————————————
//打印一个杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			//归一
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
//}————————————————————————
/*
以下为四个嫌疑犯的供词 其中只有一个人说了假话 判断谁为 罪犯
A：不是我
B：是C
C: 是D
D: C在胡说
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
//}————————————————————————————
/*
五位运动员参加了10米台跳水比赛，有人让他们说比赛结果 每位选手只说对了一半，请求出排名顺序
A说：B第二 我第三
B说：我第二 E第四
C说：我第一 D第三
D说：C最后 我第三
E说：我第四 A第一
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
//旋转字符串
/*
实现一个函数，可以左旋k个字符
例如：
abcd左旋一个字符得到bcda
左旋两个字符得到 cdab
*/
//暴力求解法
//void move(char* arr,int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//
//	for (i = 0; i < k; i++)
//	{
//		int tmp = *arr;
//		//移动一个字符串
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//三部翻转法
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
//}————————————————————————
/*
写一个字符串，判断该字符串是否为另一个字符串的子字符串
如  cdefab 为abcdef的子字符串
*/