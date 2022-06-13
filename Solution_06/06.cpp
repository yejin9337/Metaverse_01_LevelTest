//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	string pattern[4] = { "♠","♥","♣","◆" };
//	string number[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K"};
//	string card[4][13];
//	srand(time(NULL));
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 13; j++)
//		{
//			card[i][j] = pattern[i] + number[j];
//		}
//	}
//
//	for (int turn = 0; turn < 7; turn++)
//	{
//
//	}
//}


#include <iostream>
#include <sstream>

using namespace std;

	// 1 ~ 13  스페이드
	// 14 ~ 26 : 클로버
	// 27 ~ 39 : 하트
	// 40 ~ 52 : 다이아몬드
	// 0 : 조커

bool isUseCard[53] = { false };



// 중복되지 않는 카드 14장을 뽑는 함수

void pickCard(int* deck)
{
	for (int draw = 0; draw < 7; draw++)
	{
		//중복되지 않게 카드를 뽑아야함

		int card = 0; 

		do
		{
			srand(time(NULL));
			card = rand() % 53;

		} while (isUseCard[card]); //현재 뽑은 수가 들어있는 배열이 true면 다시 반복

		isUseCard[card] = true;
		deck[draw] = card;

	}
}

string convertToCardString(int cardIndex)
{
	std::stringstream ss;	

	int cardPatternIndex = cardIndex / 13;
	int cardNumberIndex = cardIndex % 13;

	static const string cardPattern[] = { "♠" ,"♣" ,"♥" ,"◈" };
	static const string cardNumber[] = { "A","1","2","3","4","5","6","7","8","9","10","J","Q","K" };

	if (cardPatternIndex == 4)
	{
		return "joker";
	}
	else
	{
		return cardPattern[cardPatternIndex] + cardNumber[cardNumberIndex];
	}

}

int main()
{
	//7장을 뽑고
	int player1_deck[7] = {0};
	pickCard(player1_deck);


	//2명의 플레이어에게 각각 배부

}
