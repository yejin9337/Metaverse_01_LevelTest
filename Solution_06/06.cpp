#include <iostream>
#include <string>
#include <sstream>
#include "06���.h"

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
			cout << i+1 << "��° ī�� ������ �����߽��ϴ�\n";
			break;
		}		
	}

	for (int i = 0; i < num; i++)
	{
		cout << player[i].convertToCardString() << endl;
	}

}
