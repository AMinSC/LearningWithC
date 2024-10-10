#include <stdio.h>

int main(void)
{
	int nMax = 0;
	int numList[5] = { 0 };

	scanf_s("%d%d%d%d%d", &numList[0], &numList[1], &numList[2], &numList[3], &numList[4]);

	for (int i = 0; i < 5; i++)
	{
		if (nMax < numList[i])
		{
			nMax = numList[i];
		}
	}

	printf("MAX: %d\n", nMax);
}