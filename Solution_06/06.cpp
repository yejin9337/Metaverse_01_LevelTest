#include <iostream>
using namespace std;

int main(void)
{
	string pattern[4] = { "¢¼","¢¾","¢À","¡ß" };
	string number[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	string card[4][13];
	srand(time(NULL));

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			card[i][j] = pattern[i] + number[j];
		}
	}

	for (int turn = 0; turn < 7; turn++)
	{

	}
}