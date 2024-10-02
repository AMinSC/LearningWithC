#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100
#define MAX_ITEMS 20

int main(void) {
    char categories[MAX_ITEMS][MAX_STRING_LENGTH];  // 1�� ī�װ� �迭
    char subcategories[MAX_ITEMS][MAX_ITEMS][MAX_STRING_LENGTH];  // 2�� �׸� �迭
    int numCategories, numSubcategories[MAX_ITEMS];

    // 1�� ī�װ� �Է� �ޱ�
    printf("1�� ī�װ��� ������ �Է��ϼ��� (�ִ� %d��): ", MAX_ITEMS);
    scanf_s("%d", &numCategories);
    getchar();  // ���� ���ڸ� ����

    for (int i = 0; i < numCategories; i++) {
        printf("%d��° ī�װ� �̸��� �Է��ϼ���: ", i + 1);
        fgets(categories[i], MAX_STRING_LENGTH, stdin);
        categories[i][strcspn(categories[i], "\n")] = 0;  // ���� ���� ����

        // 2�� �׸� �Է� �ޱ�
        printf("%s�� ���� �׸� ������ �Է��ϼ��� (�ִ� %d��): ", categories[i], MAX_ITEMS);
        scanf_s("%d", &numSubcategories[i]);
        getchar();  // ���� ���ڸ� ����

        for (int j = 0; j < numSubcategories[i]; j++) {
            printf("%s�� %d��° �׸��� �Է��ϼ���: ", categories[i], j + 1);
            fgets(subcategories[i][j], MAX_STRING_LENGTH, stdin);
            subcategories[i][j][strcspn(subcategories[i][j], "\n")] = 0;  // ���� ���� ����
        }
    }

    // 1�� ����� �Է�
    int userInput1;
    printf("1���� 100 ������ ���ڸ� �Է��ϼ��� (1�� ����): ");
    scanf_s("%d", &userInput1);

    // 1�� ���� ����
    srand(userInput1);
    int categoryIndex = rand() % numCategories;
    printf("�������� ���õ� ī�װ�: %s\n", categories[categoryIndex]);

    // 2�� ����� �Է�
    int userInput2;
    printf("1���� 100 ������ ���ڸ� �ٽ� �Է��ϼ��� (2�� ����): ");
    scanf_s("%d", &userInput2);

    // 2�� ���� ����
    srand(userInput2);
    int subIndex = rand() % numSubcategories[categoryIndex];
    printf("�������� ���õ� �׸�: %s\n", subcategories[categoryIndex][subIndex]);

    return 0;
}
