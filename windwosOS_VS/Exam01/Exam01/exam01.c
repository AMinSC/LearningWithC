#include <stdio.h>

int main(void)
{
	int age = 0;
	char name[32] = { 0 };
	
	printf("나이를 입력하세요: ");
	scanf_s("%d%*c", &age);

	printf("이름을 입력하세요: ");
	gets_s(name, sizeof(name));

	printf("\n당신의 나이는 %d살이고 이름은 '%s' 입니다.\n", age, name);
	return 0;
}