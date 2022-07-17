#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 10000
#include <stdio.h>
//int main()
//{
	//const int num = 10;//num就是常变量，具有常属性（不可被改变的属性）
	//num = 20;
	//printf("num=%d\n", num);
	//
	//int arr[10] = { 0 };//10个元素
	//int n = 10;
	//int arr2[n] = { 0 };//n是变量的，这里不行
	//return 0;
	//int n = MAX;
	//printf("n=%d\n", n);
//	return 0;
//
//
//
//
//}

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = MALE;
	printf("%d\n",MALE); 
	printf("%d\n",FEMALE); 
	printf("%d\n",SECRET);
	return 0;

}
