#include <stdio.h>

int main(void)
{
	int age = 0, charge = 750;

	scanf_s("%d", &age);

	if (age >= 20)
	{
		age = 20;
		charge = 1000;
	}
		
	printf("나이: %d, 최종요금: %d\n", age, charge);
	return 0;
}