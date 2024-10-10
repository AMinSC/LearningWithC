#include <stdio.h>

int main(void)
{
	int numList[5] = { 3, 4, 1, 5, 2 };

	for (int i = 1; i < 5; i++)
	{
		if (numList[0] > numList[i])
		{
			int tmp = numList[0];
			numList[0] = numList[i];
			numList[i] = tmp;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("numList[%d]: %d\n", i, numList[i]);
	}

	printf("MIN: %d\n", numList[0]);
}