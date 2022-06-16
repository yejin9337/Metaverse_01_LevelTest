#pragma once
#include <iostream>
using namespace std;
#define NOT_VISITED 0

class SnailArray
{
		enum Direction //열거형
		{
			DIR_RIGHT,
			DIR_DOWN,
			DIR_LEFT,
			DIR_UP,
			DIR_MAX
		};
public:
	//void Init(int size)
	//{
	//	_size = size;
	//	_arr = new int[_size * _size]; //2차원 배열을 1차원 배열로 동적 할당
	//	memset(_arr, 0, sizeof(int) * _size * _size); // 메모리 초기화

	//	_direction = DIR_RIGHT; //달팽이가 움직이는 방향
	//}

	void Update(int size, int* arr)
	{
		_posY = 0;
		_posX = 0;
		_number = 1;
		_direction = DIR_RIGHT;

		for (int i = 0; i < size * size; ++i)
		{
			arr[_posY * size + _posX] = _number;  //발자국 위치
			++_number;

			//2-3. 이동할 위치를 계산한다 -> lookup table 사용
			static const int dy[] = { 0, 1, 0, -1 };
			static const int dx[] = { 1, 0, -1, 0 };

			int ny = _posY + dy[(int)_direction];		 // ny라는건 현재 posY좌표에 direction 인덱스를 넣어서 이동방향/이동거리만큼 더한 값
			int nx = _posX + dx[(int)_direction];	     // nx라는건 현재 posX좌표에 direction 인덱스를 넣어서 이동방향/이동거리만큼 더한 값

			// 2-4. 실제 이동이 가능한지 판별한다
			// 2-4-1. 벽에 닿았을 때 -> y, c의 위치가 [0 , size] 일 때
			if (ny < 0 || nx < 0 || ny >= size || nx >= size || arr[ny * size + nx] != NOT_VISITED)
			{
				//이동이 불가능 할 때 방향 전환
				_direction = (Direction)((_direction + 1) % DIR_MAX);
				// direction 타입에 int값을 넣을 수 없기 때문에 형변환을 해야한다

				// 전환 했으니 위치값 다시 계산
				ny = _posY + dy[(int)_direction];
				nx = _posX + dx[(int)_direction];
			}

			// 드디어 이동ㅠㅠ size * size 만큼 반복
			_posY = ny;
			_posX = nx;

		}
			//delete _arr;
	}
	//void Renderer()
	//{
	//	for (int y = 0; y < _size; ++y)
	//	{
	//		for (int x = 0; x < _size; ++x)
	//		{
	//			cout << _arr[y * _size + x] << "\t";
	//		}
	//		cout << "\n";
	//	}
	//}

	private:

		int _posY = 0;
		int _posX = 0;
		int _number = 1;

		Direction _direction = DIR_RIGHT;

};