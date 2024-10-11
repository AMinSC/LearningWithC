#include <stdio.h>

// 전역 변수
const char* strItem[13]; // = {"두유", "우유", "사과", "애플"};
int itemNum[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

// 함수 선언
void itemName();
void printItem();
int checkItem(int num);
int soldItem();


int main(void) {
	itemName();
	printItem();
	while(1) {
		int num = 0;
		printf("몇번 상품을 구매하시겠습니까 ?\n");
		scanf("%d", &num);
		if (checkItem(num) == 1) {
			printf("\n이미 품절된 상품입니다. 다른 상품을 골라주세요.\n");
		} else if (num <= 0 || num > 12) {
			printf("\n올바른 번호(제품)를 선택해 주세요.\n");
		} else {
		printf("구매하신 상품은 %s 입니다.\n이용해주셔서 감사합니다.\n", strItem[itemNum[num - 1]]);
		itemNum[num - 1] = 12;
		}
		if (soldItem() == 0) {
			printf("판매상품이 모두 품절되었습니다. \n다음에 이용 부탁드립니다.\n");
			break;
		} else {
			printItem();
		}
	}
	return 0;
}

void itemName() {
	strItem[0] = "1. 우유";
	strItem[1] = "2. 커피";
	strItem[2] = "3. 주스";
	strItem[3] = "4. 탄산음료";
	strItem[4] = "5. 칸칩";
	strItem[5] = "6. 거북칩";
	strItem[6] = "7. 감자칩";
	strItem[7] = "8. 고구마칩";
	strItem[8] = "9. 안타볼";
	strItem[9] = "10. 초코버섯";
	strItem[10] = "11. 가재깡";
	strItem[11] = "12. 씨리얼";
	strItem[12] = "품절";
}

void printItem () {
	printf("\n전체 상품 목록입니다.\n");
	printf("\n=========================\n");
	for (int i = 0; i < 12; i++) {
		printf("%s\n", strItem[itemNum[i]]);
	}
	printf("\n========================\n");
}

int checkItem(int num) {
	if (itemNum[num - 1] == 12) {
		return 1;
	}
	return 0;
}

int soldItem() {
	int soldOut = 0;
	for (int i = 0; i < 13; i++) {
		if (itemNum[i] == 12) {
			soldOut++;
			if (soldOut == 12) {
			//printf("판매상품이 모두 품절되었습니다. \n
			//		다음에 다시 이용부탁드립니다.");
			//exit(0);
			return 0;
			}
		}
	}
	return 1;
}

