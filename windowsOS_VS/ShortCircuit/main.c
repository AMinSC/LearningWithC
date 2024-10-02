#include <stdio.h>

int main(void)
{
	int nAge = 0, nHeight = 0;

	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);
	printf("키를 입력하세요. : ");
	scanf_s("%d", &nHeight);

	printf("결과 : %d (1: 합격, 0: 불합격)\n",
		nAge >= 20 && nAge <= 30 && nHeight >= 150);

	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput);
	// 어떤 수를 넣어도 True가 나옴
	// 3보다 클 경우, (3 < 4) = True(1) < 20 = True
	// 3보다 작을 경우, (3 < 2) = False(0) < 20 = True
	// bResult = 3 < nInput < 20;

	bResult = nInput > 3 && nInput < 20;
	
	printf("Result: %d (1: True, 0: False)\n", bResult);
	return 0;
}