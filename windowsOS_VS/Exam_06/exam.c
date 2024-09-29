#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, result = 0;

	scanf_s("%d%d", &a, &b);

	result = a + (~b + 1); // (a = 9, b = 6) / 1001 + 1010 = (1)0011
	printf("%d\n", result);
	return 0;
}