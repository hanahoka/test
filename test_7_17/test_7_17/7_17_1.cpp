#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c','\0'};//结束标志是\0

	//求字符串长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//int len = strlen("abcbhbbhbhbhbhbbhbhhbh");//strlen没有引用头文件#include <string.h>
	//printf("%d\n", len);

	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/
	
	
	return 0;

}