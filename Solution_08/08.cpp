#include <iostream>
#include "08.h"
using namespace std;
#define NOT_VISITED 0



int main()
{
	SnailArray snali_array;

	
	cout << "배열의 크기를 입력하세요 : ";
	int size;
	cin >> size;


	//snali_array.Init(size);
	int* arr = new int[size * size]; //2차원 배열을 1차원 배열로 동적 할당
	memset(arr, 0, sizeof(int) * size * size); // 메모리 초기화


	snali_array.Update(size, arr);

	for (int y = 0; y < size; ++y)
	{
		for (int x = 0; x < size; ++x)
		{
			cout << arr[y * size + x] << "\t";
		}
		cout << "\n";
	}

	delete[] arr;
	return 0;
}
