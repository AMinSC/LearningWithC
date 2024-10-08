#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("* ");
		}
		putchar('\n');
	}

	printf("\n\n");

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("* ");
		}
		putchar('\n');
	}
	return 0;
}