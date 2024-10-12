#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct  {
	char * name;
	int age;
	char * character;
	int level;
}CAT;

CAT cats[5];

// 변수 선언
void initCat();
int collection[5] = {0, 0, 0, 0, 0};
void printCat(int selected);
int checkCollection();

int main(void) {
	srand(time(NULL));
	initCat();
	while(1) {
		printf("두근두근! 어느 고양이의 집사가 될까요?\nEnter를 눌러 확인하세요!\n");
		getchar();
		int sellected = rand() % 5;
		printCat(sellected);
		collection[sellected] = 1;
		int collectAll = checkCollection();
		if (collectAll == 1) {
			break;
		}
	}
	return 0;
}

void initCat() {
	cats[0].name = "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순함";
	cats[0].level = 1;
	cats[1].name = "귀요미";
	cats[1].age = 3;
	cats[1].character = "까칠함";
	cats[1].level = 2;
	cats[2].name = "수줍이";
	cats[2].age = 7;
	cats[2].character = "잠이 많음";
	cats[2].level = 3;
	cats[3].name = "까꿍이";
	cats[3].age = 2;
	cats[3].character = "시끄러움";
	cats[3].level = 4;
	cats[4].name = "돼냥이";
	cats[4].age = 1;
	cats[4].character = "늘 배고픔";
	cats[4].level = 5;
}

void printCat(int sellected) {
	printf("\n\n==== 당신은 다음 고양이의 집사가 됐어요! ====\n\n");
	printf(" 이름 : %s\n", cats[sellected].name);
	printf(" 나이 : %d\n", cats[sellected].age);
	printf(" 특징 : %s\n", cats[sellected].character);
	//printf(" 레벨 : %d\n", cats[sellected].level);
	printf(" 레벨 : ");
	for (int i = 0; i < cats[sellected].level; i++) {
		printf("*");
	}
	printf("\n\n");
}

int checkCollection() {
	int collectAll = 1;
	printf("\n\n === 보유한 고양이 목록이에요. ===\n\n"); 
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {
			printf("%10s", "(빈 상자)");
			collectAll = 0;
		} else {
			printf("%10s", cats[i].name);
		}
	}
	printf("\n=====================================\n\n");
	if (collectAll) {
		printf("\n\n축하합니다 !! 고양이 5마리를 모두 모았어요. 열심히 키워 주세요~! \n\n");
	}
	return collectAll;
}



