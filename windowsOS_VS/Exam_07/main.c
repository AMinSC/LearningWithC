#include <stdio.h>

int main(void)
{
	int score = -1;

	while (score < 0 || score > 100) {
		printf("점수를 입력하세요: ");
		scanf_s("%d", &score);
	}

	if (score >= 80) {
		printf("결과: 합격\n");
	}
	else {
		printf("결과: 불합격\n");
	}
	return 0;
}