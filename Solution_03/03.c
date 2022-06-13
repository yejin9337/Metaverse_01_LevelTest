#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int turn = 0; turn < 5; turn++)
	{
		for (int space = 4; space > (0 + turn); space--)
		{
			printf(" ");
		}
		// for ( int space = 0; space < (4 - turn); space++)
		for (int star = 0; star < (turn*2+1); star++)
		{
			printf("*");
		}
		printf("\n");
	}
}