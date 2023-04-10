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
//	//并且  &&  逻辑与， 两个操作数都为真，才为真，只要有一个为假，则为假
//	//或者  ||  逻辑或， 两个操作数只要有一个为真，则为真，两个同时为假，才为假
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
//	//输入
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
//	//逗号表达式，是从左向右依次计算的，逗号表达式的结果是最后一个表达式的结果
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
//	printf("%d\n", arr[5]);//[]是一个操作符,下标引用操作符
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
//	int z = Add(3, 5);//() 函数调用操作符
//	printf("hehe");
//	return 0;
//}
//

//int main()
//{
//	int num = 0;//局部的变量是进入作用域创建，出了作用域销毁了，自动创建、自动销毁的
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

//C99 变长数组
//VS2019.2022 不支持，所以就没法使用
//

//
//static 修饰局部变量的时候
//本来一个局部变量是存放在栈区的，如果被static修饰就存储到静态区了
//static 修饰局部变量改变了变量的存储类型(位置)，使得这个静态变量的生命周期变长了，直到程序结束才结束
//但是作用域不变

//void test()
//{
//	static int a = 5;//静态变量的
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
//static 修饰全局变量
//全局变量具有外部链接属性，所以在其他源文件内部依然可以使用（方法要正确）
//static修饰全局变量，改变了这个全局变量的链接属性，由外边链接属性变成了内部链接属性
//这个静态变量只能在自己所在的源文件内部使用，不能在其他源文件内部使用了
//感觉像是作用域变小了
//


//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//

//static 修饰函数
//static 修饰函数和static修饰全局变量是一样的
//函数是具有外部链接属性的，但是被static修饰，就变成了内部链接属性
//使得这个函数只能在自己所在的源文件内部使用，不能在其他文件内部使用的
//

//声明外部符号
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
//	//register 仅仅是建议的作用
//	//建议放在寄存器中，但是不是真的放在寄存器中，取决于编译器
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

//宏
//#define ADD(x, y) ((x)+(y))
//
////函数
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



//学生
struct Stu
{
	//学生的相关属性
	char name[20];//名字-字符串，一个汉字是2个字符的
	int age;//年龄
	char sex[5];//“男”、女、保密
};

struct Book
{
	char name[20];
	char author[10];
	float price;
};

int main()
{
	struct Stu s1 = { "张三", 20, "男" };
	struct Stu s2 = {"李四", 20, "男"};
	struct Stu s3 = {"王五", 20, "男"};
	struct Stu s4 = {"翠花", 20, "男"};
	struct Book b = { "《鹏哥C语言》", "鹏哥", 66.6f };
	printf("%s %s %f\n", b.name, b.author, b.price);

	return 0;
}






