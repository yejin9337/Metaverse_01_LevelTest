#pragma once
#include <iostream>
using namespace std;

class BingoGame
{
	static const int map_size = 5;

public:
	BingoGame() = default;
	~BingoGame() = default;
	BingoGame(const BingoGame& other) = delete;
	BingoGame& operator=(const BingoGame& other) = delete;

	void Init()
	{
		srand(time(nullptr));

		bool arr[(map_size * map_size + 1)] = { false };

		for (int j = 0; j < map_size; j++)
		{
			for (int i = 0; i < map_size; i++)
			{
				int num = 0;

				do
				{
					num = rand() % (map_size * map_size) + 1;
				} while (arr[num]);

				map[j][i] = num;
				arr[num] = true;

			}
		}
	}

	void print() const
	{

			for (int y = 0; y < map_size; y++)
			{
				for (int x = 0; x < map_size; x++)
				{
					if (map[y][x] == 0)
					{
						cout << "\t";
					}
					else
					{
						cout << map[y][x] << "\t";
						 
					}

				}

				cout << endl;
			}

	}

	// 빙고가 끝났는지 판별
	bool IsCompleted() const
	{
		if (bingoCount == (map_size * 2 + 2))
		{
			return true;
		}
		return false;
	}

	// 빙고를 업데이트 한다
	void Update(int input)
	{
		if (input <= 0 || input > (map_size * map_size))
		{

		}

		// 4. 숫자를 지워준다
		int isExit = false;

		for (int y = 0; y < map_size; y++)
		{
			for (int x = 0; x < map_size; x++)
			{
				if (map[y][x] == input)
				{
					map[y][x] = 0;
					isExit = true;

					break;
				}
			}

			if (isExit)
			{
				break;
			}
		}


	}
	private :
		int countHorizontalBingo() const
		{
			int count = 0;

			for (int y = 0; y < map_size; y++)
			{
				bool isBingo = true;
				for (int x = 0; x < map_size; x++)
				{
					if (map[y][x] != 0)
					{
						isBingo = false;
						break;
					}
				}
				if (isBingo)
				{
					++count;
				}
			}
			return count;
		}

		int countVerticalBingo() const
		{
			int count = 0;

			for (int y = 0; y < map_size; y++)
			{
				bool isBingo = true;
				for (int x = 0; x < map_size; x++)
				{
					if (map[x][y] != 0)
					{
						isBingo = false;
						break;
					}
				}
				if (isBingo)
				{
					++count;
				}
			}
		}
		int countDiagonalBingo() const
		{
			int count = 0;

			//왼쪽 대각선 
			{
				bool isBingo = true;
				for (int x = 0; x < map_size; x++)
				{
					if (map[x][x] != 0)
					{
						isBingo = false;
						break;
					}
				}
				if (isBingo)
				{
					++count;
				}
			}

			//오른쪽 대각선
			{
				bool isBingo = true;
				for (int x = 0; x < map_size; x++)
				{
					if (_map[x][(map_size - 1) - x] != 0)
					{
						isBingo = false;
						break;
					}
				}
				if (isBingo)
				{
					++count;
				}
			}
		}

		int count = countHorizontalBingo();
		count += countVerticalBingo();
		count += countDiagonalBingo();
		//_bingoCount = 

private:
	int _map[map_size][map_size] = { 0 };
	int bingoCount = 0;
};