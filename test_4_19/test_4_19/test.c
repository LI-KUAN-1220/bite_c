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
//	//1. ���������
//	int ret = rand() % 100 + 1;//���������������������ķ�Χ�ǣ�0~32767
//	//0~99
//	//2. ������
//	int guess = 0;
//
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//��ӡ�˵�
//	//1. ����Ϸ
//	//0. �˳���Ϸ
//	int input = 0;
//	srand((unsigned int)time(NULL));//Ҫ��srand����һ���仯��ֵ��������ϵ�ʱ����ʱ�̷����仯��
//	//time�������Է���һ��ʱ���
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);//1 0 
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	goto flag;//goto ���ֻ��һ�������ڲ���ת�����ܿ纯����ת��
//	return 0;
//}
//

//�ػ�����
//1. ��������������1�����ڵ��Թػ�
//2. ������룺��������ȡ���ػ�
//

#include <stdlib.h>
#include <string.h>


//int main()
//{
//	char input[20] = { 0 };
//	//���򵹼�ʱ�ػ�
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);//����
//		if (strcmp(input, "������") == 0)
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
//	//���򵹼�ʱ�ػ�
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);//����
//	if (strcmp(input, "������") == 0)
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

//дһ�������ӡ1-100֮������3�ı���������
//
//int main()
//{
//	//�Ȳ���1~100֮�������
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�i�Ƿ���3�ı�������������ӡ
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//�Ȳ���1~100֮�������
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//


//
//���˼ά
//

//д���뽫�������������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
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
//	//���
//	printf("%d %d %d\n", a, b, c);//��->С
//	return 0;
//}
//

//��ӡ100~200֮�������
//���� - ����
//ֻ�ܱ�1����������������������
//11
//1 2 3 4 5 6 7 8 9 10 11
//Ҫ�ж�i�Ƿ�Ϊ����
//2~i-1 ֮�������ȥ�Գ�i,�����������i��������
//2~i-1 ֮������ֶ���������i����i������
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2~i-1
//		int j = 0;
//		int flag = 1;//����i������
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
//		//�ж�i�Ƿ�Ϊ����
//		//2~i-1
//		int j = 0;
//		int flag = 1;//����i������
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

//sqrt �ǿ⺯�����ǿ�ƽ������˼
//sqrt(i) ���Ƕ�i��ƽ��
//math.h

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2~i-1
//		int j = 0;
//		int flag = 1;//����i������
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
//�Գ���
//
//����������N�־��硷
//
//

//��ӡ1000�굽2000��֮�������
//�жϵĹ���:
//1. �ܱ�4���������Ҳ��ܱ�100����
//2. �ܱ�400����������
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�Ƿ�������
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
//		//�ж�y�Ƿ�������
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

//���������������������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);//18 24
//	//����
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
//	//����
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









