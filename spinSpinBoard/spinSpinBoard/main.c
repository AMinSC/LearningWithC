#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100
#define MAX_ITEMS 20

int main(void) {
    char categories[MAX_ITEMS][MAX_STRING_LENGTH];  // 1차 카테고리 배열
    char subcategories[MAX_ITEMS][MAX_ITEMS][MAX_STRING_LENGTH];  // 2차 항목 배열
    int numCategories, numSubcategories[MAX_ITEMS];

    // 1차 카테고리 입력 받기
    printf("1차 카테고리의 개수를 입력하세요 (최대 %d개): ", MAX_ITEMS);
    scanf_s("%d", &numCategories);
    getchar();  // 개행 문자를 제거

    for (int i = 0; i < numCategories; i++) {
        printf("%d번째 카테고리 이름을 입력하세요: ", i + 1);
        fgets(categories[i], MAX_STRING_LENGTH, stdin);
        categories[i][strcspn(categories[i], "\n")] = 0;  // 개행 문자 제거

        // 2차 항목 입력 받기
        printf("%s에 대한 항목 개수를 입력하세요 (최대 %d개): ", categories[i], MAX_ITEMS);
        scanf_s("%d", &numSubcategories[i]);
        getchar();  // 개행 문자를 제거

        for (int j = 0; j < numSubcategories[i]; j++) {
            printf("%s의 %d번째 항목을 입력하세요: ", categories[i], j + 1);
            fgets(subcategories[i][j], MAX_STRING_LENGTH, stdin);
            subcategories[i][j][strcspn(subcategories[i][j], "\n")] = 0;  // 개행 문자 제거
        }
    }

    // 1차 사용자 입력
    int userInput1;
    printf("1에서 100 사이의 숫자를 입력하세요 (1차 선택): ");
    scanf_s("%d", &userInput1);

    // 1차 랜덤 선택
    srand(userInput1);
    int categoryIndex = rand() % numCategories;
    printf("랜덤으로 선택된 카테고리: %s\n", categories[categoryIndex]);

    // 2차 사용자 입력
    int userInput2;
    printf("1에서 100 사이의 숫자를 다시 입력하세요 (2차 선택): ");
    scanf_s("%d", &userInput2);

    // 2차 랜덤 선택
    srand(userInput2);
    int subIndex = rand() % numSubcategories[categoryIndex];
    printf("랜덤으로 선택된 항목: %s\n", subcategories[categoryIndex][subIndex]);

    return 0;
}
