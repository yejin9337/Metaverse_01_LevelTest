#include<iostream>
using namespace std;

class Lotto
{
public:
	//�����͸� �����
	void Clear()
	{
		delete[] _lotto;

	}


	void Make(int maxNum, int count)
	{
		_lotto = new int[count];
		srand(time(nullptr));

		for (int currentPosition = 0; currentPosition < count; currentPosition++)
		{
			int N = 0;
			bool isExist = false;
			do
			{
				//1. ���� �������� �̰� ���� ���� N�̶� �Ѵ�

				int N = (rand() % maxNum);
				bool isExist = false;


				for (int i = 0; i < currentPosition; i++)
				{

					//2. �ߺ����� Ȯ���Ѵ�
					if (N == _lotto[i])
					{
						isExist = true;
						break;
					}
				}
			} while (isExist);
		}
		_lotto
	}
	void Print();
	{}

private:
	int* _lotto = nullptr;
	int  _digitCounter;

};

int* MakeLotto(int maxNum, int count)
{

	for (int currentPosition = 0; currentPosition < count; currentPosition++)
	{
		srand(time(nullptr));
		int N = 0;
		bool isExist = false;
		do
		{
			//1. ���� �������� �̰� ���� ���� N�̶� �Ѵ�

			int N = (rand() % maxNum);
			bool isExist = false;


			for (int i = 0; i < currentPosition; i++)
			{

				//2. �ߺ����� Ȯ���Ѵ�
				if (N == overlap[i])
				{
					isExist = true;
					break;
				}
			}
		} while (isExist);
	}
}

int main()
{
	int maxNum = 0;
	cout << "�ִ� ��ȣ ���� �Է��ϼ��� :" << endl;
	cin >> maxNum;

	int count = 0;
	cout << "���� �� ������ ������ �Է��ϼ��� :" << endl;
	cin >> count;

	// lotto�迭�� ���� �ð��߿� ������ �� �ְ� ���� �Ҵ� �Ѵ�
	int* lotto = new int[count];


	delete[] lotto;
	return 0;
}