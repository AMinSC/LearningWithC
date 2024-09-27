#include <stdio.h>

int main(void)
{
	// 한 라인에 콤마를 기준으로 변수 선언을 다수 할 수 있음.
	int a = 0, b = 0;

	printf("두 정수를 입력하세요.: ");
	scanf_s("%d%d", &a, &b);

	// 변수에 형변환을 하는 방법도 있지만, 아래와 같이 리터럴 값으로도 가능
	printf("AVG: %.2f", (a + b) / 2.0);
	return 0;
}