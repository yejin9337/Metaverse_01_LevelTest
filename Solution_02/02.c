#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 3;

	while (num < 1000)
	{
		printf("%d\n", num);
		num *= 3;
	}
}