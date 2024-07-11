#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
int main()
{
	int input = 0;
	printf("是否");
	scanf("%d", &input);
	if (input == 1)
		printf("好");
	else
		printf("buhao");

	return 0;
}
