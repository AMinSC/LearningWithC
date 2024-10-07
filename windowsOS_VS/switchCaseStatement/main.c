#include <stdio.h>

int main(void)
{
	char cOperator = 0;
	int x = 0, y = 0, nResult = 0;

	scanf_s("%d%c%d", &x, &cOperator, 1, &y);

	switch (cOperator)
	{
	case '+':
		nResult = x + y;
		break;

	case '-':
		nResult = x - y;
		break;

	case '*':
		nResult = x * y;
		break;

	case '/':
		nResult = x / y;
		break;

	default:
		puts("ERROR: 알 수 없는 산술 연산입니다.\n");
	}
	printf("Result: %d\n", nResult);
	return 0;
}