#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isUseCard[53] = { false };
int remainingCard = 53;

class deck
{
public:
	deck() = default;
	~deck() = default;
	deck(const deck& other) = delete;
	deck& operator=(const deck& other) = delete;

	bool make()
	{
		//뽑기 전에 현재 뽑을 수 있는 카드가 7장이 넘는지 판단
		if (remainingCard < 7)
		{
			return false;
		}

		for (int i = 0; i < 7; i++)
		{
			//중복되지 않게 카드를 뽑아야함

			int card = 0;

			do
			{
				card = rand() % 53;

			} while (isUseCard[card]); //현재 뽑은 수가 들어있는 배열이 true면 다시 반복

			isUseCard[card] = true;
			_deck[i] = card;

		}
		remainingCard -= 7;
		return true;
	}

	string convertToCardString()
	{
		static const string cardPattern[] = { "♠" ,"♣" ,"♥" ,"◈" ,"joker "};
		static const string cardNumber[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
		string result = "";

		if (_deck[0] == -1)
		{
			return "덱 없음!";
		}

		for (int i = 0; i < 7; i++)
		{
			result += cardPattern[_deck[i] / 13];
			if (_deck[i] / 13 == 4)
			{
				continue;
			}
			result += cardNumber[_deck[i] % 13];
			result += " ";
		}
			return result;
	}

private:
	int _deck[7] = { -1 };
};

