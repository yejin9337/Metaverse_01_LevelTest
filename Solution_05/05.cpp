#include<iostream>
using namespace std;

class Lotto
{
public:
	//데이터를 지운다
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
				//1. 값을 무작위로 뽑고 뽑은 값을 N이라 한다

				int N = (rand() % maxNum);
				bool isExist = false;


				for (int i = 0; i < currentPosition; i++)
				{

					//2. 중복인지 확인한다
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
			//1. 값을 무작위로 뽑고 뽑은 값을 N이라 한다

			int N = (rand() % maxNum);
			bool isExist = false;


			for (int i = 0; i < currentPosition; i++)
			{

				//2. 중복인지 확인한다
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
	cout << "최대 번호 값을 입력하세요 :" << endl;
	cin >> maxNum;

	int count = 0;
	cout << "생성 할 숫자의 개수를 입력하세요 :" << endl;
	cin >> count;

	// lotto배열이 실행 시간중에 정해질 수 있게 동적 할당 한다
	int* lotto = new int[count];


	delete[] lotto;
	return 0;
}