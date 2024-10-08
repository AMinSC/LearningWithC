#include <stdio.h>

int main(void)
{
	int cnt = 10, total = 0;


	// while statement
	int i = 1;
	while (i <= cnt) {
		total += i;
		i++;
	}
	printf("while statement Total: %d\n", total);

	total = 0;
	// for statement
	for (int i = 1; i <= cnt; i++)
	{
		total += i;
	}
	printf("for statement Total: %d\n", total);
	return 0;
}