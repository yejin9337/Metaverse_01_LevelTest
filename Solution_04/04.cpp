//#include<iostream>
//
//using namespace std;
//
//void sort(int* arr, int size)
//{
//	//버블 소트(버블 정렬) 는 여러 페이즈로 이뤄지며
//	//각 페이즈가 끝날 시 맨 끝 원소부터 정렬된다(오름차순)
//
//	for (int turn = 0; turn < size - 1; ++turn)  //배열크기 -1만큼 
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

//한 사이클을 돌 때 오른쪽부터 정렬

#include <iostream>
using namespace std;

void sort(int* arr, int size)
{
	for (int turn = 0; turn < size - 1; turn++) // 타깃. 이번 순서에 정렬할 것
	{
		for (int i = 0; i < size-turn-1; i++) // 타깃과 비교할 놈.
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