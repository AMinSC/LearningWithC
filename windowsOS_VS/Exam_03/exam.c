#include <stdio.h>

int main(void)
{
	int time = 0;

	scanf_s("%d", &time);

	int hour = time / 3600;
	int minute = (time % 3600) / 60;
	int second = time % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n", 
		time, hour, minute, second);

	return 0;
}