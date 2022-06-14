#include <iostream>
using namespace std;
#define ºù°íÅ©±â 10

int main()
{
	//ºù°í°ÔÀÓ ÆÇ »ý¼º

	int map[ºù°íÅ©±â][ºù°íÅ©±â] = { 0 };
	bool arr[(ºù°íÅ©±â * ºù°íÅ©±â +1)] = { false };
	srand(time(NULL));
	for (int j = 0; j < ºù°íÅ©±â; j++)
	{
		for (int i = 0; i < ºù°íÅ©±â; i++)
		{
			int num = 0;

			do
			{
				num = rand() % (ºù°íÅ©±â * ºù°íÅ©±â) + 1;
			} while (arr[num]);

			map[j][i] = num;
			arr[num] = true;

		}
	}

	int bingoCount = 0;

	while (1)
	{
		for (int y = 0; y < ºù°íÅ©±â; y++)
		{
			for (int x = 0; x < ºù°íÅ©±â; x++)
			{
				if (map[y][x] == 0)
				{
					cout  << "\t";
				}
				else
				{
					cout << map[y][x] << "\t";

				}

			}

			cout << endl;
		}

		// ÀÔÃâ·Â ¹®±¸

		cout << "ÇöÀç " << bingoCount << "ÁÙÀÇ ºù°í°¡ ¿Ï¼ºµÇ¾ú½À´Ï´Ù" << endl;
		cout << "¼ýÀÚ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä :";
		int input;
		cin >> input;

		// »ç¿ëÀÚÀÇ ÀÔ·ÂÀÌ À¯È¿ÇÑÁö ÆÇ´Ü -> ¿ÀÀÔ·ÂÀÌ¶ó¸é 1¹øºÎÅÍ ´Ù½Ã ¹Ýº¹
		if (input <= 0 || input > (ºù°íÅ©±â * ºù°íÅ©±â))
		{
			system("cls");
		}

		// 4. ¼ýÀÚ¸¦ Áö¿öÁØ´Ù
		int isExit = false;

		for (int y = 0; y < ºù°íÅ©±â; y++)
		{
			for (int x = 0; x < ºù°íÅ©±â; x++)
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

		// ºù°í ¼¼±â 

		int count = 0;
		

		// °¡·Î
		for (int y = 0; y < ºù°íÅ©±â; y++)
		{
			bool isBingo = true;
			for (int x = 0; x < ºù°íÅ©±â; x++)
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

		//¼¼·Î
		for (int y = 0; y < ºù°íÅ©±â; y++)
		{
			bool isBingo = true;
			for (int x = 0; x < ºù°íÅ©±â; x++)
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

		//¿ÞÂÊ ´ë°¢¼± 
		{
			bool isBingo = true;
			for (int x = 0; x < ºù°íÅ©±â; x++)
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

		//¿À¸¥ÂÊ ´ë°¢¼±
		{
			bool isBingo = true;
			for (int x = 0; x < ºù°íÅ©±â; x++)
			{
				if (map[x][(ºù°íÅ©±â-1)-x] != 0)
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

		bingoCount = count;

		// 6. ¹Ýº¹
		system("cls");

		if (bingoCount == (ºù°íÅ©±â * 2 + 2))
		{
			cout << "¿Ï¼º!";
			break;
		}
	}
}