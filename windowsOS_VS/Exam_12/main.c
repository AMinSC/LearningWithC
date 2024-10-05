#include <stdio.h>

int main(void)
{
	int age = 0, charge = 0;

	scanf_s("%d", &age);

	if (4 <= age && 13 >= age) {
		charge = 500;
	}
	else if (14 <= age && 19 >= age) {
		charge = 750;
	}
	else if (20 <= age) {
		charge = 1000;
	}

	printf("나이: %d, 요금: %d\n", age, charge);

	return 0;
}