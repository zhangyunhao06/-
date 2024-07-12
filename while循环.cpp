#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int study = 0;
		while (study < 10)
		{
			printf("%d", study);
			study++;
		}
		if (study>=10)
			printf("study");
	return 0;
}
