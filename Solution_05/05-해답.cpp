#include<iostream>
using namespace std;

int main()
{
	int minNum = 1;
	int maxNum = 0;
	cout << "�ִ� ��ȣ ���� �Է��ϼ��� :" << endl;
	cin >> maxNum;

	int count = 0;
	cout << "���� �� ������ ������ �Է��ϼ��� :" << endl;
	cin >> count;

	// lotto�迭�� ���� �ð��߿� ������ �� �ְ� ���� �Ҵ� �Ѵ�
	int* lotto = new int[count];

	//���� 
	for (int currentPosition = 0; currentPosition < count; currentPosition++)
	{
		srand(time(nullptr));
		int N = 0;
		bool isExist = false;
		do
		{                                                                                                                                                                                            
			//1. ���� �������� �̰� ���� ���� N�̶� �Ѵ�
		
			int N = (rand() % maxNum - minNum + 1) + minNum;
			bool isExist = false;


			for (int i = 0; i < currentPosition; i++)
			{

				//2. �ߺ����� Ȯ���Ѵ�
				if (N == lotto[i])
				{
					isExist = true;
					break;
				}
				
			}
		}
		while (isExist);
	}
	delete[] lotto;
	return 0;
}