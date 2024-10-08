#include <stdio.h>

int main(void)
{
	int nInput = 1;

	while (nInput >= 1 && nInput <= 9)
	{
		scanf_s("%d", &nInput);

		if (nInput < 1 || nInput > 9)
		{
			printf("프로그램을 종료합니다.\n");
			return 0;
		}

		for (int i = 0; i < nInput; i++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}