#include <iostream>
using namespace std;

int main()
{
	//������� �� ����

	int map[5][5] = { 0 };
	bool arr[26] = { false };
	srand(time(NULL));
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			int num = 0;

			do
			{
				num = rand() % 25 + 1;
			} while (arr[num]);

			map[j][i] = num;
			arr[num] = true;

		}
	}

	int bingoCount = 0;

	while (1)
	{
		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
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

		// ����� ����

		cout << "���� " << bingoCount << "���� ���� �ϼ��Ǿ����ϴ�" << endl;
		cout << "���ڸ� �Է����ּ��� :";
		int input;
		cin >> input;

		// ������� �Է��� ��ȿ���� �Ǵ� -> ���Է��̶�� 1������ �ٽ� �ݺ�
		if (input <= 0 || input >= 25)
		{
			
		}

		// 4. ���ڸ� �����ش�
		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				if (map[y][x] == input)
				{
					map[y][x] = 0;
				}
			}
		}
		// 5. ���� ������ ����
		bingoCount = 0;

		for (int i = 0; i < 5; i++)
		{
			if (map[i][0] == 0 && map[i][1] == 0 && map[i][2] == 0 && map[i][3] == 0 && map[i][4] == 0)
			{
				bingoCount++;
			}
			if (map[0][i] == 0 && map[1][i] == 0 && map[2][i] == 0 && map[3][i] == 0 && map[4][i] == 0)
			{
				bingoCount++;
			}
		}

		if (map[0][0] == 0 && map[1][1] == 0 && map[2][2] == 0 && map[3][3] == 0 && map[4][4] == 0)
		{
			bingoCount++;
		}
		if (map[4][0] == 0 && map[3][1] == 0 && map[2][2] == 0 && map[1][3] == 0 && map[0][4] == 0)
		{
			bingoCount++;
		}

		// 6. �� �� �ݺ�
		system("cls");
	}
}