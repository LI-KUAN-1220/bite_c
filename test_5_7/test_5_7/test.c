#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//���鴫�Σ��βο�����ָ�룬Ҳ�������������ʽ
//�����β�д��������Ϊ�˷�����⣬�����ϻ���ָ��
//���βεĵط����᲻�ᴴ���µ������أ������
//
//�Ƕ�λ���鴫���أ�
//
//void print(int arr[], int sz)
//{
//
//}
//
////void print(int* arr, int sz)
////{
////
////}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//����Ļ�����9 * 9�˷��ھ���

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//.....
//9*1=9 9*2=18 ....

//int main()
//{
//	int i = 0;
//	//��
//	for (i = 1; i <= 9; i++)
//	{
//		//ÿһ�еĴ�ӡ
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//��
//	for (i = 1; i <= 9; i++)
//	{
//		//ÿһ�еĴ�ӡ
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//\t ��ˮƽ�Ʊ��
//\t һ����4���ո�
//

//��10 �����������ֵ
//
//int main()
//{
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�����ֵ
//	int max = arr[0];//�����һ��ֵ�������ֵ
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//���
//	printf("%d\n", max);
//
//	return 0;
//}

//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����

//
// ����������������������������
// / ������������һ����������ִ�и���������
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum += flag * (1.0 / i);
//		else
//			sum -= flag * (1.0 / i);
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}
//


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

//
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99
//

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��λ��9
//			count++;
//		if (i / 10 == 9)//ʮλΪ9
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//


#include <stdio.h>

// int main() {
//     int arr[4] = {0};
//     int i = 0;
//     for(i=0; i<4; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     //�����һ��ֵ�������ֵ
//     int max = arr[0];
//     for(i=1; i<4; i++)
//     {
//         if(arr[i]>max)
//             max = arr[i];
//     }
//     printf("%d\n", max);
//     return 0;
// }
// #include <limits.h>

// int main() {
//     int arr[4] = {0};
//     int i = 0;
//     int max = INT_MIN;//�������ֵ�������ͱ�������Сֵ
//     for(i=0; i<4; i++)
//     {
//         scanf("%d", &arr[i]);
//         if(arr[i]>max)
//             max = arr[i];
//     }

//     printf("%d\n", max);
//     return 0;
// }

#include <stdio.h>

// int main() {
//     int n = 0;
//     scanf("%d", &n);
//     int i = 0;
//     long long sum = 0;
//     for(i=1; i<=n; i++)
//     {
//         sum += i;
//     }
//     printf("%lld\n", sum);
//     return 0;
// }


// int main() {
//     long long n = 0;
//     scanf("%lld", &n);
//     long long sum = 0;
//     sum = (1+n)*n/2;
//     printf("%lld\n", sum);
//     return 0;
// }
//

#include <limits.h>

//int main()
//{
//	INT_MAX;
//	INT_MIN;
//
//	return 0;
//}
//
// 
// 
// #include <ctype.h>
#include <stdio.h>

// int main() {
//     char ch = 0;
//     while(scanf("%c", &ch) == 1)
//     {
//         if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
//         {
//             printf("%c is an alphabet.\n", ch);
//         }
//         else {
//             printf("%c is not an alphabet.\n", ch);
//         }
//         getchar();//����\n
//     }
//     return 0;
// }

// int main() {
//     int ch = 0;
//     while((ch = getchar()) != EOF)
//     {
//         if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
//         {
//             printf("%c is an alphabet.\n", ch);
//         }
//         else {
//             printf("%c is not an alphabet.\n", ch);
//         }
//         getchar();//����\n
//     }
//     return 0;
// }

// int main() {
//     int ch = 0;
//     while((ch = getchar()) != EOF)
//     {
//         if(isalpha(ch))
//         {
//             printf("%c is an alphabet.\n", ch);
//         }
//         else {
//             printf("%c is not an alphabet.\n", ch);
//         }
//         getchar();//����\n
//     }
//     return 0;
// }



//#include <stdio.h>

//int main()
//{
//    float p = 0.0f;
//    int m = 0;
//    int d = 0;
//    int flag = 0;
//    scanf("%f %d %d %d", &p, &m, &d, &flag);
//
//    if (m == 11 && d == 11)
//        p = p * 0.7 - flag * 50;
//    else if (m == 12 && d == 12)
//        p = p * 0.8 - flag * 50;
//
//    if (p < 0.0)
//        p = 0.0;
//
//    printf("%.2f\n", p);
//    return 0;
//}
//
//
//

