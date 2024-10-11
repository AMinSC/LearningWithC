#include <stdio.h>

struct Book {
	int ID;
	char * title;
	int available;
};

void printbook(struct Book * bookArray);
void checkBook(struct Book * bookArray, int num);

int main(void) {
	struct Book bookArray[4] = {
		{1, "C 입문편", 1},
		{2, "파이썬 기본편", 1},
		{3, "자바 기본편", 1},
		{4, "파이썬 중급편", 1}
	};

	while(1) {
		printbook(&bookArray[0]);
		printf("빌리고 싶은 도서의 번호를 입력해 주세요 : \n");
		int num = 0;
		scanf("%d", &num);
		if (num == -1) {
			printf("\n이용해 주셔서 감사합니다\n");
			break;
		} else {
			checkBook(&bookArray[0], num);
		}
	}
	return 0;
}

void printbook(struct Book * bookArray) {
	struct Book * booklist;
	booklist = &bookArray[0];
	printf("\n\n ==== 도서 목록 ==== \n\n");
	for (int i = 0; i < 4; i++) {
		printf(" %d 번 도서, %-16s, 도서 대출 가능 여부 : %d\n", booklist[i].ID, booklist[i].title, bookArray[i].available);
	}
	printf("\n ======================\n");
}

void checkBook(struct Book * bookArray, int num) {
	struct Book * bookList;
	bookList = &bookArray[0];
	
	if (bookList[num - 1].available == 1) {
		printf(" %d 번 도서, %-16s, 도서 대출 가능하여 대출해드렸습니다.\n", bookList[num - 1].ID, bookList[num - 1].title);
		bookList[num - 1].available = 0;
	} else if (bookList[num - 1].available == 0) {
		printf(" %d 번 도서 , %-16s, 도서 대출중으로 정상 반납되었습니다.\n", bookList[num - 1].ID, bookList[num - 1].title);
		bookList[num - 1].available = 1;
	} else {
		printf("\n 문제가 발생했습니다. \n");
	}
}

