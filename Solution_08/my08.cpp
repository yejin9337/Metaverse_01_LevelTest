#include <iostream>
using namespace std;


int main()
{
	const int input = 8;
	const int maxNum = input * input;
	int arr[input][input];

	int num = 0;
	int xMax = input - 1;
	int yMax = input - 1;
	int xMin = 0;
	int yMin = 1;
	int x = 0;
	int y = 0;



	while (num < maxNum)
	{
		
		for (; x <= xMax; x++)
		{
			arr[y][x] = ++num;
		}
		x--;
		y++;
		xMax--;

		if (num >= maxNum) { break; }

		for (; y <= yMax; y++)
		{
			arr[y][x] = ++num;
		}
		y--;
		x--;
		yMax--;

		if (num >= maxNum) { break; }

		for (; x >= xMin; x--)
		{
			arr[y][x] = ++num;
		}
		x++;
		y--;
		xMin++;

		if (num >= maxNum) { break; }

		for (; y >= yMin; y--)
		{
			arr[y][x] = ++num;
		}
		y++;
		x++;
		yMin++;
	}
	
	for (int j = 0; j < input; j++)
	{
		for (int i = 0; i < input; i++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << "\n";
	}

}