#pragma once
#include <iostream>
using namespace std;
#define NOT_VISITED 0

class SnailArray
{
		enum Direction //������
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
	//	_arr = new int[_size * _size]; //2���� �迭�� 1���� �迭�� ���� �Ҵ�
	//	memset(_arr, 0, sizeof(int) * _size * _size); // �޸� �ʱ�ȭ

	//	_direction = DIR_RIGHT; //�����̰� �����̴� ����
	//}

	void Update(int size, int* arr)
	{
		_posY = 0;
		_posX = 0;
		_number = 1;
		_direction = DIR_RIGHT;

		for (int i = 0; i < size * size; ++i)
		{
			arr[_posY * size + _posX] = _number;  //���ڱ� ��ġ
			++_number;

			//2-3. �̵��� ��ġ�� ����Ѵ� -> lookup table ���
			static const int dy[] = { 0, 1, 0, -1 };
			static const int dx[] = { 1, 0, -1, 0 };

			int ny = _posY + dy[(int)_direction];		 // ny��°� ���� posY��ǥ�� direction �ε����� �־ �̵�����/�̵��Ÿ���ŭ ���� ��
			int nx = _posX + dx[(int)_direction];	     // nx��°� ���� posX��ǥ�� direction �ε����� �־ �̵�����/�̵��Ÿ���ŭ ���� ��

			// 2-4. ���� �̵��� �������� �Ǻ��Ѵ�
			// 2-4-1. ���� ����� �� -> y, c�� ��ġ�� [0 , size] �� ��
			if (ny < 0 || nx < 0 || ny >= size || nx >= size || arr[ny * size + nx] != NOT_VISITED)
			{
				//�̵��� �Ұ��� �� �� ���� ��ȯ
				_direction = (Direction)((_direction + 1) % DIR_MAX);
				// direction Ÿ�Կ� int���� ���� �� ���� ������ ����ȯ�� �ؾ��Ѵ�

				// ��ȯ ������ ��ġ�� �ٽ� ���
				ny = _posY + dy[(int)_direction];
				nx = _posX + dx[(int)_direction];
			}

			// ���� �̵��Ф� size * size ��ŭ �ݺ�
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