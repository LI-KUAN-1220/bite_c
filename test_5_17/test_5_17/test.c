#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p == %p\n", p+i, &arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//p��һ��ָ�������ָ�����Ҳ�Ǳ��������������ڴ��п��ٿռ�ģ��Ǳ������е�ַ
//	int** pp = &p;//pp���Ƕ���ָ�����������ָ����������������һ��ָ������ĵ�ַ
//
//	//*(*pp) = 100;
//	**pp = 100;
//
//	printf("%d\n", a);
//
//	//int** * ppp = &pp;
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "cuihua";
//
//	char* parr[] = { arr1, arr2, arr3 };
//
//	char** p = parr;
//
//	return 0;
//}


//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "hello world";
//	//char arr3[] = "cuihua";
//
//	////ָ������
//	//char* parr[] = { arr1, arr2, arr3 };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%s\n", parr[i]);
//	//}
//
//	/*char arr[] = "abcdef";
//	printf("%s\n", arr);*/
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//ָ������
//	int* parr[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			//printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//����һ��ѧ��
//����+����+�Ա�

//�����ṹ������
//struct Stu
//{
//	//��Ա�����������������ṹ������������Ե�
//	char name[20];
//	int age;
//	char sex[5];//�� Ů  ����
//} s2,s3,s4; //s2,s3,s4 ���ǽṹ����� - ȫ�ֱ���

//typedef struct Stu
//{
//	//��Ա�����������������ṹ������������Ե�
//	char name[20];
//	int age;
//	char sex[5];//�� Ů  ����
//} Stu;
//
//int main()
//{
//	//int a = 10;
//	struct Stu s1;//�ֲ�����
//	Stu s2;
//
//	return 0;
//}

//struct Stu
//{
//	//��Ա�����������������ṹ������������Ե�
//	char name[20];
//	int age;
//	char sex[5];//�� Ů  ����
//};
//
//int main()
//{
//	//int a = 10;
//	struct Stu s1;//�ֲ�����
//	//Stu s2;//��C�����У�û�жԽṹ������typedef,struct�ؼ��ֲ���ʡ��
//
//	return 0;
//}
//

//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//};
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//	return 0;
//}

//
//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1 = {100, "bit", NULL};
//
//struct S s2 = {98, "hehe", NULL};
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//	struct S s3 = {.arr = "abc", .p = NULL, .a = 1};
//	printf("%d %s %p\n", s3.a, s3.arr, s3.p);//. �ṹ��Ա���ʲ�����
//	struct B sb = { "hello", {20, "qqq", NULL}, 3.14};
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//
//	return 0;
//}

#include <string.h>

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu t)
//{
//	t.age = 20;
//	//t.name = "����";//err
//	strcpy(t.name, "����");//�ַ�������
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = {0};
//	set_stu(s);
//	print_stu(s);
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
};

//void set_stu(struct Stu* ps)
//{
//	(*ps).age = 20;
//	//t.name = "����";//err
//	strcpy((*ps).name, "����");//�ַ�������
//}

//void set_stu(struct Stu* ps)
//{
//	ps->age = 20;//�ṹ��ָ��->�ṹ���Ա
//	//t.name = "����";//err
//	strcpy(ps->name, "����");//�ַ�������
//}


//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//




//дһ���������ز����������� 1 �ĸ�����
//���磺 15    00001111    4 �� 1
//
//int number_of_1(unsigned int m)
//{
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//			count++;
//		m /= 2;
//	}
//	return count;
//}


//int number_of_1(int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
//int number_of_1(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111--> 32
//	int n = 0;
//	scanf("%d", &n);//15
//	int ret = number_of_1(n);
//	printf("%d\n", ret);//4
//	return 0;
//}
//

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//30 28 26 ... 4 2 0
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}
//

//
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//

//int number_of_1(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	//��� - ��ͬΪ0������Ϊ1
//	int ret = number_of_1(m ^ n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//


