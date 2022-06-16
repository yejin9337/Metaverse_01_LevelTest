#include <iostream>
#include "07헤더.h"
using namespace std;

int main()
{
	// 세팅
	BingoGame bingo;
	bingo.Init();

	while (false == bingo.IsCompleted())
	{
		system("cls");

		//출력
		bingo.print();

		cout << "숫자를 입력해주세요 :";
		int input;
		cin >> input;

		// djqepdlxm
		bingo.Update(input);



	}
		// cout << "현재 " << bingoCount << "줄의 빙고가 완성되었습니다" << endl;
}