#include <iostream>
using namespace std;
#define ����ũ�� 10

int main()
{
	//������� �� ����

	int map[����ũ��][����ũ��] = { 0 };
	bool arr[(����ũ�� * ����ũ�� +1)] = { false };
	srand(time(NULL));
	for (int j = 0; j < ����ũ��; j++)
	{
		for (int i = 0; i < ����ũ��; i++)
		{
			int num = 0;

			do
			{
				num = rand() % (����ũ�� * ����ũ��) + 1;
			} while (arr[num]);

			map[j][i] = num;
			arr[num] = true;

		}
	}

	int bingoCount = 0;

	while (1)
	{
		for (int y = 0; y < ����ũ��; y++)
		{
			for (int x = 0; x < ����ũ��; x++)
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
		if (input <= 0 || input > (����ũ�� * ����ũ��))
		{
			system("cls");
		}

		// 4. ���ڸ� �����ش�
		int isExit = false;

		for (int y = 0; y < ����ũ��; y++)
		{
			for (int x = 0; x < ����ũ��; x++)
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

		// ���� ���� 

		int count = 0;
		

		// ����
		for (int y = 0; y < ����ũ��; y++)
		{
			bool isBingo = true;
			for (int x = 0; x < ����ũ��; x++)
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

		//����
		for (int y = 0; y < ����ũ��; y++)
		{
			bool isBingo = true;
			for (int x = 0; x < ����ũ��; x++)
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

		//���� �밢�� 
		{
			bool isBingo = true;
			for (int x = 0; x < ����ũ��; x++)
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

		//������ �밢��
		{
			bool isBingo = true;
			for (int x = 0; x < ����ũ��; x++)
			{
				if (map[x][(����ũ��-1)-x] != 0)
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

		// 6. �ݺ�
		system("cls");

		if (bingoCount == (����ũ�� * 2 + 2))
		{
			cout << "�ϼ�!";
			break;
		}
	}
}