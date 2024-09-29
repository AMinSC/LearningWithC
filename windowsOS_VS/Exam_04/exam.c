#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, tmp = 0;

	scanf_s("%d%d", &a, &b);

	tmp = a;
	a = b;
	b = tmp;

	printf("a:%d, b:%d\n", a, b);
	return 0;
}