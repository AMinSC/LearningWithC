#include <Windows.h>
#include <stdio.h>

struct MyStructure {
    int myNum;
    char myLetter;
};

// QueryPerformanceCounter�� ����Ͽ� �ð� ���̸� ����ϴ� �Լ�
double getElapsedTime(LARGE_INTEGER start, LARGE_INTEGER end, LARGE_INTEGER frequency) {
    return (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;
}

int main(void) {
    LARGE_INTEGER startTime, endTime, frequency;
    double diffTime, diffTime_2;
    struct MyStructure s1;

    // ���ػ� Ÿ�̸��� ���ļ��� ����
    QueryPerformanceFrequency(&frequency);

    // ù ��° �ð� ����
    QueryPerformanceCounter(&startTime);
    s1.myNum = 13;
    s1.myLetter = 'B';

    printf("My number : %d\n", s1.myNum);
    printf("My letter : %c\n", s1.myLetter);
    Sleep(1000);  // 1�� ��� (1000 �и���)

    // ù ��° �ð� ���� ����
    QueryPerformanceCounter(&endTime);
    diffTime = getElapsedTime(startTime, endTime, frequency);
    printf("%f s\n", diffTime);

    // �� ��° �ð� ����
    QueryPerformanceCounter(&startTime);
    s1.myNum = 15;
    s1.myLetter = 'A';

    printf("My number : %d\n", s1.myNum);
    printf("My letter : %c\n", s1.myLetter);
    Sleep(700);  // 700 �и��� ���

    // �� ��° �ð� ���� ����
    QueryPerformanceCounter(&endTime);
    diffTime_2 = getElapsedTime(startTime, endTime, frequency);
    printf("%f s\n", diffTime_2);

    return 0;
}
