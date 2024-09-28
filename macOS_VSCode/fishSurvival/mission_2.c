#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

int level;
int arrayFish[6];
int* cursor;

void initData(void);
void printfFishes(void);
void decreaseWater(long elapsedTime);
int checkFishAlive(void);

int main (void) {
	struct timeval start;
	struct timeval curr;

	long totalElapsedTime = 0;
	long prevElapsedTime = 0;
	int num;
	initData();

	cursor = arrayFish;

	gettimeofday(&start, NULL);
	while(1) {
		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요? ");
		scanf("%d", &num);

		if (num < 1 || num > 6) {
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		gettimeofday(&curr, NULL);
		totalElapsedTime = curr.tv_sec + (curr.tv_usec / CLOCKS_PER_SEC) - start.tv_sec - (start.tv_usec / CLOCKS_PER_SEC);
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);
		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] <= 0) {
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 주지 않습니다.\n", num);
			if (checkFishAlive() == 0) {
				printf("모든 물고기가 죽었습니다..ㅠㅠ\n");
				exit(0);
			}
		} else if (cursor[num - 1] + 1 <= 100) {
			printf("%d 번 어항에 물을 줍니다\n\n", num);
			cursor[num - 1] += 1;

		if (totalElapsedTime / 20 > level -1) {
			level++;
			printf("**** 축하합니다. %d레벨에서 %d레벨로 올랐습니다. ****\n\n", level - 1, level);
			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}
		if (checkFishAlive() == 0) {
			printf("모든 물고기가 죽었습니다. ㅠㅠ\n");
			exit(0);
		} else {
			printf("물고기가 아직 살아 있어요!\n");
		}
		prevElapsedTime = totalElapsedTime;
		}
	}
	return 0;
}

void initData(void) {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

void printfFishes(void) {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive(void) {
	int total_alive = 0;
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			total_alive += i;
		//} else if (arrayFish[i] <= 0) {
		//	return 0;
		}
	}
	if (total_alive >= 1) {
		return 1;
	} else if (total_alive <= 0) {
		return 0;
	}
	return 0;
}
