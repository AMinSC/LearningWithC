#include <stdio.h>

int main(void)
{
	int a = 0, answer = 0;

	scanf_s("%d", &a);
	answer += a;
	scanf_s("%d", &a);
	answer += a;
	scanf_s("%d", &a);
	answer += a;

	printf("Total: %d\n", answer);

	return 0;
}