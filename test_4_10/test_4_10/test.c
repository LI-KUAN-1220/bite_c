#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 4;
//	int b = 5;
//	if (a >= b)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	//����  &&  �߼��룬 ������������Ϊ�棬��Ϊ�棬ֻҪ��һ��Ϊ�٣���Ϊ��
//	//����  ||  �߼��� ����������ֻҪ��һ��Ϊ�棬��Ϊ�棬����ͬʱΪ�٣���Ϊ��
//	int a = 0;
//	int b = 0;
//	/*if (a && b)
//	{
//		printf("hehe\n");
//	}*/
//	/*if (a || b)
//	{
//		printf("haha\n");
//	}*/
// 	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	int m = 0;
//	//(a>b) ? (m = a) : (m = b);
//	m = (a > b ? a : b);
//
//	/*if (a > b)
//		m = a;
//	else
//		m = b;*/
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = 5;
//	//���ű��ʽ���Ǵ����������μ���ģ����ű��ʽ�Ľ�������һ�����ʽ�Ľ��
//	int d = (a+=3, b=5, c=a+b, c-4);
//	//      a=6    b=5  c=11   7
//	printf("%d\n", d);
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//             0 1 2 3 4 5 6 7 8 9 
//	printf("%d\n", arr[5]);//[]��һ��������,�±����ò�����
//	//
//	//3+5
//	//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int z = Add(3, 5);//() �������ò�����
//	printf("hehe");
//	return 0;
//}
//

//int main()
//{
//	int num = 0;//�ֲ��ı����ǽ��������򴴽������������������ˣ��Զ��������Զ����ٵ�
//
//	return 0;
//}

//typedef unsigned int u_int;
//typedef unsigned long long ull;
//
//int main()
//{
//	unsigned int num = 0;
//	u_int num2 = 0;
//	ull num3 = 0;
//
//	return 0;
//}
//

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//C99 �䳤����
//VS2019.2022 ��֧�֣����Ծ�û��ʹ��
//

//
//static ���ξֲ�������ʱ��
//����һ���ֲ������Ǵ����ջ���ģ������static���ξʹ洢����̬����
//static ���ξֲ������ı��˱����Ĵ洢����(λ��)��ʹ�������̬�������������ڱ䳤�ˣ�ֱ����������Ž���
//���������򲻱�

//void test()
//{
//	static int a = 5;//��̬������
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//
//static ����ȫ�ֱ���
//ȫ�ֱ��������ⲿ�������ԣ�����������Դ�ļ��ڲ���Ȼ����ʹ�ã�����Ҫ��ȷ��
//static����ȫ�ֱ������ı������ȫ�ֱ������������ԣ�������������Ա�����ڲ���������
//�����̬����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ����
//�о������������С��
//


//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//static ���κ���
//static ���κ�����static����ȫ�ֱ�����һ����
//�����Ǿ����ⲿ�������Եģ����Ǳ�static���Σ��ͱ�����ڲ���������
//ʹ���������ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã������������ļ��ڲ�ʹ�õ�
//

//�����ⲿ����
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Add(a, b);
//	printf("%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	//register �����ǽ��������
//	//������ڼĴ����У����ǲ�����ķ��ڼĴ����У�ȡ���ڱ�����
//	register int num = 10;
//
//	return 0;
//}
//

//
//#define M 100
//
//int main()
//{
//	int arr[M] = {0};//100*4 = 400
//	int m = M;
//	printf("%d\n", sizeof(arr));//400
//	printf("%d\n", M);
//	printf("%d\n", m);
//
//	return 0;
//}
//

//��
//#define ADD(x, y) ((x)+(y))
//
////����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	int d = Add(a, b);
//	printf("%d\n", d);
//
//	return 0;
//}



//ѧ��
struct Stu
{
	//ѧ�����������
	char name[20];//����-�ַ�����һ��������2���ַ���
	int age;//����
	char sex[5];//���С���Ů������
};

struct Book
{
	char name[20];
	char author[10];
	float price;
};

int main()
{
	struct Stu s1 = { "����", 20, "��" };
	struct Stu s2 = {"����", 20, "��"};
	struct Stu s3 = {"����", 20, "��"};
	struct Stu s4 = {"�仨", 20, "��"};
	struct Book b = { "������C���ԡ�", "����", 66.6f };
	printf("%s %s %f\n", b.name, b.author, b.price);

	return 0;
}






