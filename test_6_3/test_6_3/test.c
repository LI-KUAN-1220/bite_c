#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下
//	for (i = 0; i < line-1; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


//自幂数
//m - n位数
//m的每一位的n次方之后等于m
//153 - 3
//1^3 + 5^3 + 3^3 == 153
//
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否是自幂数就行
//		//1. 计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2. 求每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3. 判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);//2 5
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					         {9803,"zhao",18} 
//	                         };
//	fun(students + 1);
//	return 0;
//}
//


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	
//	scanf("%d", &money);
//	total += money;
//	empty += money;
//
//	/*while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;
//	}*/
//
//	if(money>0)
//		total = 2 * money - 1;
//
//	printf("total = %d\n", total);
//
//	return 0;
//}
//


//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//1 2 3 4 5 6 7 8 9
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = 0;
//	int r = sz - 1;
//
//	while (l<r)
//	{
//		//从前向后找一个偶数
//		while ((l < r) && arr[l] % 2 == 1)
//		{
//			l++;
//		}
//		//从后向前找一个奇数
//		while ((l < r) && arr[r] % 2 == 0)
//		{
//			r--;
//		}
//		if (l < r)
//		{
//			int tmp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = tmp;
//			l++;
//			r--;
//		}
//	}
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}




 /*       * 
      * * 
    * * * 
  * * * * 
* * * * *
*/

#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i + j < n - 1)
//                    printf("  ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//    unsigned char a = 200;
//    //00000000000000000000000011001000
//    //11001000
//    unsigned char b = 100;
//    //00000000000000000000000001100100
//    //01100100
//    //
//    unsigned char c = 0;
//    c = a + b; // 整型提升的
//    //00000000000000000000000011001000
//    //00000000000000000000000001100100
//    // 
//    //00000000000000000000000100101100
//    // 
//    //00000000000000000000000000101100 - c
//    //
//    printf("%d %d", a + b, c);
//    //300 44
//    return 0;
//}
//
//

//unsigned int a = 0x1234;
//unsigned char b = *(unsigned char*)&a;
//在32位大端模式处理器上变量b等于（ ）
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if (((b == 2) + (a == 3) == 1) &&
//                            ((b == 2) + (e == 4) == 1) &&
//                            ((c == 1) + (d == 2) == 1) &&
//                            ((c == 5) + (d == 3) == 1) &&
//                            ((e == 4) + (a == 1) == 1))
//                        {
//                            if(a*b*c*d*e == 120)
//                                printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}
//

//
//int main()
//{
//    char killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer!='a') + (killer=='c') + (killer=='d') + (killer!='d') == 3)
//        {
//            printf("%c\n", killer);
//            break;
//        }
//    }
//}
//

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……


//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

int main()
{
    int arr[10][10] = { 0 };
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        int j = 0;
        for (j = 0; j <=i; j++)
        {
            if (i == j || j == 0)
                arr[i][j] = 1;

            if (i >= 2 && j >= 1)  
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        int j = 0;
        for (j = 0; j <=i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}