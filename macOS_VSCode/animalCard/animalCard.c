#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 전역 변수
int arrayAnimal[4][5];
char* strAnimal[10];
int checkAnimal[4][5];

// 함수 선언
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();


int main(void) {
	srand(time(NULL));
	initAnimalArray();
	initAnimalName();
	shuffleAnimal();
	int failcount = 0;
	
	while(1) {
		int select1 = 0;
		int select2 = 0;
		printAnimals();
		printQuestion();
		printf("\n뒤집을 카드 2장을 고르세요. (예 12 14) -> ");
		scanf("%d %d", &select1, &select2);
		
		if (select1 == select2) {
			printf("\n\n정말 게임을 종료하시겠습니까?\n\n(종료): 0\n(취소): 1\n");
			int answer = 0;
			scanf("%d", &answer);
			if (answer == 1) {
				continue;
			} else if (answer == 0) {
				printf("게임을 종료합니다.\n");
				break;
			}
		}
		int fistSelect_x = conv_pos_x(select1);
		int fistSelect_y = conv_pos_y(select1);
		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);
		if ((checkAnimal[fistSelect_x][fistSelect_y] == 0 
				&& checkAnimal[secondSelect_x][secondSelect_y] == 0) 
				&& (arrayAnimal[fistSelect_x][fistSelect_y] == 
					arrayAnimal[secondSelect_x][secondSelect_y])) {
			printf("\n\n빙고 ! %s 발견\n\n", strAnimal[arrayAnimal[fistSelect_x][fistSelect_y]]);
			checkAnimal[fistSelect_x][fistSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		} else {
			printf("\n\n땡! 서로 다른 동물 카드거나 이미 뒤집힌 카드입니다.\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[fistSelect_x][fistSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n");
			failcount++;
		}
		if (foundAllAnimals() == 1) {
			printf("\n\n축하합니다 ! 모든 동물을 찾았습니다.\n");
			printf("총 %d번 실패했습니다.\n", failcount);
			break;
		}
	}
	return 0;
}

void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName() {
	strAnimal[0] = "원숭이",
	strAnimal[1] = "하마",
	strAnimal[2] = "강아지",
	strAnimal[3] = "고양이",
	strAnimal[4] = "돼지",
	strAnimal[5] = "코끼리",
	strAnimal[6] = "기린",
	strAnimal[7] = "낙타",
	strAnimal[8] = "타조",
	strAnimal[9] = "호랑이";
}

void shuffleAnimal() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);
			arrayAnimal[x][y] = j;
		}
	}
}

int getEmptyPosition() {
	while(1) {
		int randPos = rand() % 20;
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);
		if (arrayAnimal[x][y] == -1) {
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x (int x) {
	return x / 5;
}

int conv_pos_y (int y) {
	return y % 5;
}

void printAnimals() {
	printf("\n======== 동물 위치를 보여 줍니다. ========\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s\n", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n==========================================\n");
}	

void printQuestion() {
	printf("\n(문제)\n\n");
	int seq = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			//seq++;
			if (checkAnimal[i][j] != 0) {
				printf("%8s\n", strAnimal[arrayAnimal[i][j]]);
			} else {
				//seq = arrayAnimal[i][j];
				printf("%8d\n", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0) {
				return 0;
			//} else {
			//	break;
			}
		}
	}
	return 1;
}
