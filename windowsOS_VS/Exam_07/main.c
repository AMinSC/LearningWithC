#include <stdio.h>

int main(void)
{
	int score = -1;

	while (score < 0 || score > 100) {
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &score);
	}

	if (score >= 80) {
		printf("���: �հ�\n");
	}
	else {
		printf("���: ���հ�\n");
	}
	return 0;
}