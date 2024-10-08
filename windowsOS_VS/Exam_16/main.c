#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
		{
			putchar('\t');
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*\t");
		}
		putchar('\n');
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++)
		{
			if (j >= 4 - i)
				printf("* ");
			else
				printf("  ");
		}
		putchar('\n');
	}
	return 0;
}