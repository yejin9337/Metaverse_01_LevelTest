#include <iostream>
#include "08.h"
using namespace std;
#define NOT_VISITED 0



int main()
{
	SnailArray snali_array;

	
	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	int size;
	cin >> size;


	//snali_array.Init(size);
	int* arr = new int[size * size]; //2���� �迭�� 1���� �迭�� ���� �Ҵ�
	memset(arr, 0, sizeof(int) * size * size); // �޸� �ʱ�ȭ


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
