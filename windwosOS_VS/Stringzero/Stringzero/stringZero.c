#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };

	printf("�̸��� �Է��ϼ���: ");
	// gets()�� ���� ���� ������ ����
	// fgets(szName, sizeof(szName), stdin);  Unix �迭
	gets_s(szName, sizeof(szName));

	printf("����� �̸��� ");
	puts(szName);
	puts("�Դϴ�.");
	return 0;
}