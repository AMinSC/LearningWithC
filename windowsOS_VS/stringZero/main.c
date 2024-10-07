#include <stdio.h>

int main(void)
{
	int nInput = 0;
	char chCredit = 'X';

	printf("점수를 입력하세요. : ");
	scanf_s("%d", &nInput);

	switch (nInput / 10)
	{
	case 10:
	case 9:
		chCredit = 'A';
		break;

	case 8:
		chCredit = 'B';
		break;

	case 7:
		chCredit = 'C';
		break;

	case 6:
		chCredit = 'D';
		break;

	default:
		chCredit = 'F';
	}

	printf("학점 : %c\n", chCredit);
	return 0;
}