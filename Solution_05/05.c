#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// �ߺ����� ��� �Ǵ°��� ���� ���� bool �迭�� ����� false�� �ʱ�ȭ
// ó�� ���� ���ڸ� ����ϰ� �� �迭�� true�� ��ȯ
// ��µ� ���ڿ� �ش�Ǵ� �迭�� true��� �������ڸ� �ٽ� �̴´� 

int main(void)
{
	int maxNum = 0;
	scanf("%d", &maxNum);
	int count = 0;
	scanf("%d", &count);
	srand(time(NULL));

	bool save[10000] = { false };

	for (int i = 0; i < count; i++)
	{
		int result = (rand() % maxNum) + 1;

		while (save[result] == true)
		{
			result = (rand() % maxNum) + 1;
		}

		printf("%d\n", result);
		save[result] = true;
	}
}