#include <stdio.h>
#include <string.h>
#define MAX 10000

int main(void) {
	char line[MAX];
	char contents[MAX] ="";
	char password[20];
	
	printf("비밀 일기에 오신 것을 환영합니다.\n");
	printf("비밀본호를 입력해주세요 : \n");

	scanf("%s", password);

	printf("\n\n ==== 비밀번호 확인 중... ==== \n\n");
	if (strcmp(password, "skehzheld") == 0) {
		printf(" === 비밀번호 확인 완료 === \n\n");
		char* mac = "secretdiary.txt";
		// a+ 모드는 파일이 없으면 생성, 파일이 있으면 뒤에서부터 내용 추가
		FILE* file = fopen(mac, "a+b");
		if (file == NULL) {
			printf("파일 열기 실패\n");
			return 1;
		}

		fseek(file, 0, SEEK_SET); // 파일 위치 지시자를 파일의 맨 앞으로 이동
		
		while (fgets(line, MAX, file) != NULL) {
			printf("%s", line);
		}
		
		printf("\n\n 내용을 계속 작성하세요! 종료하시려면 EXIT 를 입력하세요.\n\n");

		while(1) {
			scanf("%[^\n]", contents); //\n이 나오기 전까지 한문장씩  읽어들임
			getchar(); // Enter(\n) 입력 시 프러시 처리
			if (strcmp(contents, "EXIT") == 0) {
				printf("비밀일기 입력을 종료합니다.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); // Enter를 위해서 무시하도록 처리
		}
		fclose(file);
	} else {
		printf(" === 비밀번호가 틀렸어요 ===\n\n");
		printf(" 이넘!! \n\n\n");
	}

	return 0;
}



