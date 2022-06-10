#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char pattern[4] = { '¢¼','¢¾','¢À','¡ß' };
	char number[13] = { 'A','2','3','4','5','6','7','8','9','10','J','Q','K' };
	char card[4][13];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			printf("%c %c\n", pattern[i], number[j]);
		}
	}
}