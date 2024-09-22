#include <Windows.h>
#include <stdio.h>

struct MyStructure {
    int myNum;
    char myLetter;
};

// QueryPerformanceCounter를 사용하여 시간 차이를 계산하는 함수
double getElapsedTime(LARGE_INTEGER start, LARGE_INTEGER end, LARGE_INTEGER frequency) {
    return (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;
}

int main(void) {
    LARGE_INTEGER startTime, endTime, frequency;
    double diffTime, diffTime_2;
    struct MyStructure s1;

    // 고해상도 타이머의 주파수를 구함
    QueryPerformanceFrequency(&frequency);

    // 첫 번째 시간 측정
    QueryPerformanceCounter(&startTime);
    s1.myNum = 13;
    s1.myLetter = 'B';

    printf("My number : %d\n", s1.myNum);
    printf("My letter : %c\n", s1.myLetter);
    Sleep(1000);  // 1초 대기 (1000 밀리초)

    // 첫 번째 시간 측정 종료
    QueryPerformanceCounter(&endTime);
    diffTime = getElapsedTime(startTime, endTime, frequency);
    printf("%f s\n", diffTime);

    // 두 번째 시간 측정
    QueryPerformanceCounter(&startTime);
    s1.myNum = 15;
    s1.myLetter = 'A';

    printf("My number : %d\n", s1.myNum);
    printf("My letter : %c\n", s1.myLetter);
    Sleep(700);  // 700 밀리초 대기

    // 두 번째 시간 측정 종료
    QueryPerformanceCounter(&endTime);
    diffTime_2 = getElapsedTime(startTime, endTime, frequency);
    printf("%f s\n", diffTime_2);

    return 0;
}
