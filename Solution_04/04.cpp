//#include<iostream>
//
//using namespace std;
//
//void sort(int* arr, int size)
//{
//	//���� ��Ʈ(���� ����) �� ���� ������� �̷�����
//	//�� ����� ���� �� �� �� ���Һ��� ���ĵȴ�(��������)
//
//	for (int turn = 0; turn < size - 1; ++turn)  //�迭ũ�� -1��ŭ 
//	{
//		for (int i = 0; i < size - 1 - turn; ++i)
//		{

//			if (arr[i] > arr[i + 1])
//			{
//				swap(arr[i], arr[i + 1]);
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[5] = { 5,2,4,1,3 };
//	sort(arr, 5);
//
//
//}

//�� ����Ŭ�� �� �� �����ʺ��� ����

#include <iostream>
using namespace std;

void sort(int* arr, int size)
{
	for (int turn = 0; turn < size - 1; turn++) // Ÿ��. �̹� ������ ������ ��
	{
		for (int i = 0; i < size-turn-1; i++) // Ÿ��� ���� ��.
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
			}
		}

	}
}

int main()
{
	int arr[5] = { 5,2,4,1,3 };
	sort(arr, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
}