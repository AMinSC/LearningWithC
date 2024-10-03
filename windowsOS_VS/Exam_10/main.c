#include <stdio.h>

int main(void)
{
	int nInput = 0, maxNum = 0;

	scanf_s("%d", &nInput);
	maxNum = nInput;

	scanf_s("%d", &nInput);
	if (nInput > maxNum) maxNum = nInput;

	scanf_s("%d", &nInput);
	if (nInput > maxNum) {
		maxNum = nInput;
	}

	printf("MAX: %d\n", maxNum);
	return 0;
}