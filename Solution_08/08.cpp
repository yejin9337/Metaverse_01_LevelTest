#include <iostream>
using namespace std;
#define NOT_VISITED


int main()
{
	// 1. �迭 �����
	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	int size;
	cin >> size;

	int* arr = new int[size * size];
	memset(arr, 0, sizeof(int) * size * size);

	// 2. ������ �迭 ����
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

	// 2 - 2. ���ڱ��� �����
	for (int i = 0; i < size * size; ++i)
	{
		arr[posY * size + posX] = footstep;  //���ڱ� ��ġ
		++footstep;

		//2-3. �̵��� ��ġ�� ����Ѵ�
		static const int dy[] = { 0, 1, 0, -1 }; // dy[0] == 0 
												 //	dy[1] == 1 
												 // dy[2] == 0
												 // dy[3] == -1

		static const int dx[] = { 1, 0, -1, 0 }; // dx[0] == 1 
												 //	dx[1] == 0 
												 // dx[2] == -1
												 // dx[3] == 0

		int ny = posY + dy[(int)direction];		 // ny��°� ���� posY��ǥ�� direction �ε����� �־ �̵�����/�̵��Ÿ���ŭ ���� ��
		int nx = posX + dx[(int)direction];	     // nx��°� ���� posX��ǥ�� direction �ε����� �־ �̵�����/�̵��Ÿ���ŭ ���� ��

		
		// 2-4. ���� �̵��� �������� �Ǻ��Ѵ�
		// 2-4-1. ���� ����� �� -> y, c�� ��ġ�� [0 , size] �� ��
		if (ny < 0 || ny >= size || nx < 0 || nx >= size || arr[ny*size +nx]!= NOT_VISITED)
		
		// 2-4-2. �̹� ������ �� �϶� -> arr[ny][nx] != 0

		

	}


		
	}
	 

	// 3. ���
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
