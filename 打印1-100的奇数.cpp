#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 0;
		while (100>=a)
		{
			b = a % 2;
			if (0 == b)
			{
				printf(" ");
			}
			else
				printf("%d", a);
			a++;
		}
	return 0;
}
