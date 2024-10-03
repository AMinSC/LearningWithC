#include <stdio.h>

int main(void)
{
	int nInput = 0, maxNum = 0;

	scanf_s("%d", &nInput);
	maxNum = (nInput > maxNum) ? nInput : maxNum;

	scanf_s("%d", &nInput);
	maxNum = (nInput > maxNum) ? nInput : maxNum;

	scanf_s("%d", &nInput);
	maxNum = (nInput > maxNum) ? nInput : maxNum;

	printf("MAX: %d\n", maxNum);
	return 0;
}