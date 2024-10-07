#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool isA = false;
	bool isB = false;

	int nInput;
	scanf_s("%d", &nInput);
	if (nInput > 0)
		isA = true;
	else
		goto CLEARN_UP;

	scanf_s("%d", nInput);
	if (nInput > 0)
		isB = true;
	else
		goto CLEARN_UP;

	// 자원을 받은게 있다면 돌려줘라
CLEARN_UP:
	if (isA)	isA = false;
	if (isB)	isB = false;
	return 0;
}