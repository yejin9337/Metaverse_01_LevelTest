#include <memory>

class Player
{
public:
	int hp = 100;
	int atk = 100;

	Monster* pTarget = nullptr;

	void AttackToTarget();
};

class Monster
{
public:
	int hp = 50;
	int atk = 10;
};

void Player::AttackToTarget()
{
	pTarget->hp -= this->atk;
}

Player* p1 = nullptr;
Player* p2 = nullptr;

Monster* m1 = nullptr;
Monster* m2 = nullptr;


enum class RESULT
{
	OK = 1,
	FAIL = 2,
	FAIL_NOT_ENOUGHT_MEMORY = 3,
};

void gameStart()
{
	RESULT result = CreatePlayer(&p1, 100, 100);
	printf("%d", (int)result);
	CreatePlayer(&p2, 100, 100);

	m1 = (Monster*)malloc(sizeof(Monster));
	m2 = (Monster*)malloc(sizeof(Monster));
}

void gameEnd()
{
	free(p1);
	free(p2);

	free(m1);
	free(m2);
}

RESULT CreatePlayer(Player** ppPlayer, int hp, int atk)
{
	(*ppPlayer) = (Player*)malloc(sizeof(Player));
	if ((*ppPlayer) == nullptr)
	{
		return RESULT::FAIL_NOT_ENOUGHT_MEMORY;
	}
	(*ppPlayer)->hp = hp;
	(*ppPlayer)->atk = atk;
	return RESULT::OK;
}

int main()
{
	gameStart();

	// 플레이어의 공격범위내에 적이 들어옴



	p1->pTarget = m1;
	p1->AttackToTarget();

	gameEnd();
}