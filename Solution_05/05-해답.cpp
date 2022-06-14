#include<iostream>
using namespace std;

int main()
{
	int minNum = 1;
	int maxNum = 0;
	cout << "최대 번호 값을 입력하세요 :" << endl;
	cin >> maxNum;

	int count = 0;
	cout << "생성 할 숫자의 개수를 입력하세요 :" << endl;
	cin >> count;

	// lotto배열이 실행 시간중에 정해질 수 있게 동적 할당 한다
	int* lotto = new int[count];

	//랜덤 
	for (int currentPosition = 0; currentPosition < count; currentPosition++)
	{
		srand(time(nullptr));
		int N = 0;
		bool isExist = false;
		do
		{                                                                                                                                                                                            
			//1. 값을 무작위로 뽑고 뽑은 값을 N이라 한다
		
			int N = (rand() % maxNum - minNum + 1) + minNum;
			bool isExist = false;


			for (int i = 0; i < currentPosition; i++)
			{

				//2. 중복인지 확인한다
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