#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	const int n = 1;
	printf("%d  \n", n);
	int arr[n] = {0};//n 为具有常属性的变量[]中需常量
	printf("%d\n", arr);
	return 0;
}
