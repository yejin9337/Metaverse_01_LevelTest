//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//
//// 중복으로 출력 되는것을 막기 위해 bool 배열을 만들고 false로 초기화
//// 처음 나온 숫자면 출력하고 그 배열을 true로 변환
//// 출력된 숫자에 해당되는 배열이 true라면 랜덤숫자를 다시 뽑는다 
//
//int main(void)
//{
//	int maxNum = 0;
//	printf("최대 번호 값을 입력하세요 :");
//	scanf("%d", &maxNum);
//
//	int count = 0;
//	printf("생성 할 숫자의 개수를 입력하세요 :");
//	scanf("%d", &count);
//	srand(time(NULL));
//
//	bool save[10000] = { false };
//
//	for (int i = 0; i < count; i++)
//	{
//		int result = (rand() % maxNum) + 1;
//
//		while (save[result] == true)
//		{
//			result = (rand() % maxNum) + 1;
//		}
//
//		printf("%d\n", result);
//		save[result] = true;
//	}
//}
