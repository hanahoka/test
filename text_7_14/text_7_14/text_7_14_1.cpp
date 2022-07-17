#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////全局变量
//int a = 100;
//
//int main()
//{
////	printf("天哪\n");
////	return 0;
////	int age = 20;
////	double weight = 75.3;
////
////	age = age + 1;
////	weight = weight - 20;
////	printf("%d\n", age);
////	printf("%lf\n", weight);
////
//	int a = 10;//局部变量
//	printf("%d\n", a);
//	return 0;
////}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;

}