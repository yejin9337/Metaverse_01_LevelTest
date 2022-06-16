#include <iostream>
#include <string>
#include <sstream>
#include "06헤더.h"

using namespace std;

#define num 8

int main()
{
	srand(time(NULL));

	deck player[num];

	for (int i = 0; i < num; i++)
	{
		if (false == player[i].make())
		{
			cout << i+1 << "번째 카드 생성은 실패했습니다\n";
			break;
		}		
	}

	for (int i = 0; i < num; i++)
	{
		cout << player[i].convertToCardString() << endl;
	}

}
