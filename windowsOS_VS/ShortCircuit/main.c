#include <stdio.h>

int main(void)
{
	int nAge = 0, nHeight = 0;

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);
	printf("Ű�� �Է��ϼ���. : ");
	scanf_s("%d", &nHeight);

	printf("��� : %d (1: �հ�, 0: ���հ�)\n",
		nAge >= 20 && nAge <= 30 && nHeight >= 150);

	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput);
	// � ���� �־ True�� ����
	// 3���� Ŭ ���, (3 < 4) = True(1) < 20 = True
	// 3���� ���� ���, (3 < 2) = False(0) < 20 = True
	// bResult = 3 < nInput < 20;

	bResult = nInput > 3 && nInput < 20;
	
	printf("Result: %d (1: True, 0: False)\n", bResult);
	return 0;
}