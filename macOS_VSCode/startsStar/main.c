#include <stdio.h>

int main(void)
{
    int sizeNum = 0;
    printf("별의 크기를 입력해주세요. ");
    scanf("%d", &sizeNum);

    printf("작은별 \n");
    for (int i = 0; i < sizeNum; i++)
    {
        for (int j = sizeNum; j > i; j--)
            putchar(' ');
        for (int j = 0; j <= i; j++)
            printf("* ");
        putchar('\n');
    }
    for (int i = 0; i < sizeNum - 1; i++)
    {
        for (int j = 0; j <= i + 1; j++)
            putchar(' ');
        for (int j = sizeNum - 1; j > i; j--)
            printf("* ");
        putchar('\n');
    }

    printf("\n\n");

    printf("큰별 \n");
    for (int i = 0; i < sizeNum; i++)
    {
        for (int j = sizeNum; j > i; j--)
            putchar('\t');
        for (int j = 0; j < i + 1; j++)
            printf("*\t");
        for (int j = 1; j < i + 1; j++)
            printf("*\t");
        putchar('\n');
    }
    for (int i = 0; i < sizeNum - 1; i++)
    {
        for (int j = 0; j <= i + 1; j++)
            putchar('\t');
        for (int j = sizeNum - 1; j > i; j--)
            printf("*\t");
        for (int j = sizeNum - 2; j > i; j--)
            printf("*\t");
        putchar('\n');
    }
    return 0;
}