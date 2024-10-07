#include <stdio.h>

int main(void)
{
	int age = 0, charge = 1000;
	double discount = 0;

	scanf_s("%d", &age);

	if (4 > age) {
		discount = charge;
	}
	else if (4 <= age && 13 >= age) {
		discount = charge * 0.5;
	}
	else if (14 <= age && 19 >= age) {
		discount = charge * 0.25;
	}

	printf("나이: %d, 요금: %d\n", age, (int)(charge - discount));

	return 0;
}