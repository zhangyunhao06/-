#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};
	char arr3[] = { 'a','b','c' ,'\0'};
	char arr4[] = { char(97),'b','c' ,'\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%s\n", arr4);
	printf("%d\n", strlen(arr1));//需求#include<string.h>  strlen计数字符串长度
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	printf("%d\n", strlen(arr4));
	return 0;
}
