#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.play   0.exit *****\n");
//	printf("***************************\n");
//}
//
////void srand (unsigned int seed);
//void game()
//{
//	RAND_MAX;
//	//1. 生成随机数
//	int ret = rand() % 100 + 1;//可以生成随机数，随机数的范围是：0~32767
//	//0~99
//	//2. 猜数字
//	int guess = 0;
//
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//打印菜单
//	//1. 玩游戏
//	//0. 退出游戏
//	int input = 0;
//	srand((unsigned int)time(NULL));//要给srand传递一个变化的值，计算机上的时间是时刻发生变化的
//	//time函数可以返回一个时间戳
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);//1 0 
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	goto again;
//
//end:
//	return 0;
//}
//
//void test()
//{
//flag:
//	printf("test\n");
//}
//
//int main()
//{
//	printf("hehe\n");
//	goto flag;//goto 语句只能一个函数内部跳转，不能跨函数跳转的
//	return 0;
//}
//

//关机程序
//1. 程序运行起来后，1分钟内电脑关机
//2. 如果输入：我是猪，就取消关机
//

#include <stdlib.h>
#include <string.h>


//int main()
//{
//	char input[20] = { 0 };
//	//程序倒计时关机
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);//输入
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	char input[20] = { 0 };
//	//程序倒计时关机
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//输入
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//



//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//

//写一个代码打印1-100之间所有3的倍数的数字
//
//int main()
//{
//	//先产生1~100之间的数字
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i是否是3的倍数，如果是则打印
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//先产生1~100之间的数字
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//


//
//编程思维
//

//写代码将三个整数数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//计算
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);//大->小
//	return 0;
//}
//

//打印100~200之间的素数
//素数 - 质数
//只能被1和它本身整除的数是质数
//11
//1 2 3 4 5 6 7 8 9 10 11
//要判断i是否为素数
//2~i-1 之间的数字去试除i,如果能整除则i不是素数
//2~i-1 之间的数字都不能整除i，则i是素数
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2~i-1
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//1 2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//2~i-1
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//1 2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//sqrt 是库函数，是开平方的意思
//sqrt(i) 就是对i开平方
//math.h

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断i是否为素数
//		//2~i-1
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//1 2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

//
//试除法
//
//《素数求解的N种境界》
//
//

//打印1000年到2000年之间的闰年
//判断的规则:
//1. 能被4整除，并且不能被100整除
//2. 能被400整除是闰年
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是否是闰年
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			count++;
//			printf("%d ", y);
//		}
//		if (y % 400 == 0)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是否是闰年
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//

//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);//18 24
//	//计算
//	//int k = (m > n ? n : m);
//	int k = 0;
//	if (m > n)
//		k = n;
//	else
//		k = m;
//	while (1)
//	{
//		if (m % k == 0 && n % k == 0)
//		{
//			break;
//		}
//		k--;
//	}
//	printf("%d\n", k);
//	return 0;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);//18 24
//	//计算
//	int k = 0;
//	while (k = m % n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//
//









