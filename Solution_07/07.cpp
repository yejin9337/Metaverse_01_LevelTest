#include <iostream>
#include "07���.h"
using namespace std;

int main()
{
	// ����
	BingoGame bingo;
	bingo.Init();

	while (false == bingo.IsCompleted())
	{
		system("cls");

		//���
		bingo.print();

		cout << "���ڸ� �Է����ּ��� :";
		int input;
		cin >> input;

		// djqepdlxm
		bingo.Update(input);



	}
		// cout << "���� " << bingoCount << "���� ���� �ϼ��Ǿ����ϴ�" << endl;
}