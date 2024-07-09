#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", a[4]);//分别对应0123456789，4对应5
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", a[i]);
		i++;
	}
	char b[3] = {'a','b','c'};
	float c[2] = { 1.1 };
	return 0;
}
