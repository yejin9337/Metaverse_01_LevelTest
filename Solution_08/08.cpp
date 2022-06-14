#include <iostream>
using namespace std;
#define NOT_VISITED


int main()
{
	// 1. 배열 만들기
	cout << "배열의 크기를 입력하세요 : ";
	int size;
	cin >> size;

	int* arr = new int[size * size];
	memset(arr, 0, sizeof(int) * size * size);

	// 2. 달팽이 배열 세팅
	enum Direction
	{
		DIR_RIGHT,
		DIR_DOWN,
		DIR_LEFT,
		DIR_UP,
		DIR_MAX
	};
	int posY = 0;
	int posX = 0;
	int footstep = 1;
	Direction direction = DIR_RIGHT;

	// 2 - 2. 발자국을 남긴다
	for (int i = 0; i < size * size; ++i)
	{
		arr[posY * size + posX] = footstep;  //발자국 위치
		++footstep;

		//2-3. 이동할 위치를 계산한다
		static const int dy[] = { 0, 1, 0, -1 }; // dy[0] == 0 
												 //	dy[1] == 1 
												 // dy[2] == 0
												 // dy[3] == -1

		static const int dx[] = { 1, 0, -1, 0 }; // dx[0] == 1 
												 //	dx[1] == 0 
												 // dx[2] == -1
												 // dx[3] == 0

		int ny = posY + dy[(int)direction];		 // ny라는건 현재 posY좌표에 direction 인덱스를 넣어서 이동방향/이동거리만큼 더한 값
		int nx = posX + dx[(int)direction];	     // nx라는건 현재 posX좌표에 direction 인덱스를 넣어서 이동방향/이동거리만큼 더한 값

		
		// 2-4. 실제 이동이 가능한지 판별한다
		// 2-4-1. 벽에 닿았을 때 -> y, c의 위치가 [0 , size] 일 때
		if (ny < 0 || ny >= size || nx < 0 || nx >= size || arr[ny*size +nx]!= NOT_VISITED)
		
		// 2-4-2. 이미 지나온 곳 일때 -> arr[ny][nx] != 0

		

	}


		
	}
	 

	// 3. 출력
	for (int y = 0; y < size; ++y)
	{
		for (int x = 0; x < size; ++x)
		{
			cout << arr[y * size + x] << "\t";
		}
		cout << "\n";
	}

	//arr[2][3]
	//[2 * size + 3]

}
