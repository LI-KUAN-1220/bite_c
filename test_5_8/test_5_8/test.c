#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test(int a[])
//{
//	a[0] = 3;
//	a[1] = 5;
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//void test(int *px, int *py)
//{
//	*px = 3;
//	*py = 5;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//共享单车
//int x = 0;
//int y = 0;
//
//void test()
//{
//	x = 3;
//	y = 5;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test();
//
//	a = x;
//	b = y;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//

//void test()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//


//编写一个函数实现n的k次方，使用递归实现
#include <math.h>

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double num =Pow(n, k);
//
//	printf("%lf\n", num);
//	return 0;
//}
//
//

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//DigitSum(1729)
//DigitSum(172) + 9
//DigitSum(17) 2 + 9
//DigitSum(1) + 7 + 2 + 9
//
//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//


//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数

//1. 假设不考虑递归
//2. 直接使用库函数
//void reverse_string(char* s)
//{
//	int left = 0;
//	int right = strlen(s) - 1;
//
//	while (left<right)
//	{
//		char tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//}


//递归
//大事化小

int my_strlen(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}

void reverse_string(char* s)
{
	if (*s == '\0')
		return;
	int len = my_strlen(s);
	char tmp = s[0];
	s[0] = s[len - 1];
	s[len - 1] = '\0';
	if(my_strlen(s+1)>=2)
		reverse_string(s+1);
	s[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}


