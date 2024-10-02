#include <stdio.h>

int main(void)
{
	int nData = 10;

	printf("%zd, %zd, %zd\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%zd, %zd\n", sizeof('A'), sizeof(char));
	printf("%zd, %zd\n", sizeof(123.45F), sizeof(123.45));
	
	printf("%zd, %zd\n", sizeof(nData + 10), sizeof(++nData));
	printf("%d\n", nData);
	return 0;
}