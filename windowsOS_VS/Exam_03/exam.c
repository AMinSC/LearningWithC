#include <stdio.h>

int main(void)
{
	int time = 0;

	scanf_s("%d", &time);

	int hour = time / 3600;
	int minute = (time % 3600) / 60;
	int second = time % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", 
		time, hour, minute, second);

	return 0;
}