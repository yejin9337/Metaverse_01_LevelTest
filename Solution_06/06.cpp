//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	string pattern[4] = { "��","��","��","��" };
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

	// 1 ~ 13  �����̵�
	// 14 ~ 26 : Ŭ�ι�
	// 27 ~ 39 : ��Ʈ
	// 40 ~ 52 : ���̾Ƹ��
	// 0 : ��Ŀ

bool isUseCard[53] = { false };



// �ߺ����� �ʴ� ī�� 14���� �̴� �Լ�

void pickCard(int* deck)
{
	for (int draw = 0; draw < 7; draw++)
	{
		//�ߺ����� �ʰ� ī�带 �̾ƾ���

		int card = 0; 

		do
		{
			srand(time(NULL));
			card = rand() % 53;

		} while (isUseCard[card]); //���� ���� ���� ����ִ� �迭�� true�� �ٽ� �ݺ�

		isUseCard[card] = true;
		deck[draw] = card;

	}
}

string convertToCardString(int cardIndex)
{
	std::stringstream ss;	

	int cardPatternIndex = cardIndex / 13;
	int cardNumberIndex = cardIndex % 13;

	static const string cardPattern[] = { "��" ,"��" ,"��" ,"��" };
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
	//7���� �̰�
	int player1_deck[7] = {0};
	pickCard(player1_deck);


	//2���� �÷��̾�� ���� ���

}
