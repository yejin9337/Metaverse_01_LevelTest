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
		//�̱� ���� ���� ���� �� �ִ� ī�尡 7���� �Ѵ��� �Ǵ�
		if (remainingCard < 7)
		{
			return false;
		}

		for (int i = 0; i < 7; i++)
		{
			//�ߺ����� �ʰ� ī�带 �̾ƾ���

			int card = 0;

			do
			{
				card = rand() % 53;

			} while (isUseCard[card]); //���� ���� ���� ����ִ� �迭�� true�� �ٽ� �ݺ�

			isUseCard[card] = true;
			_deck[i] = card;

		}
		remainingCard -= 7;
		return true;
	}

	string convertToCardString()
	{
		static const string cardPattern[] = { "��" ,"��" ,"��" ,"��" ,"joker "};
		static const string cardNumber[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
		string result = "";

		if (_deck[0] == -1)
		{
			return "�� ����!";
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

