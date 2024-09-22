#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>

struct MyStructure {
	int myNum;
	char myLetter;
};

int main(void) {
	struct timeval startTime, endTime;
	double diffTime, diffTime_2;
	struct MyStructure s1;

	gettimeofday(&startTime, NULL);
	s1.myNum = 13;
	s1.myLetter = 'B';
	
	printf("My number : %d\n", s1.myNum);
	printf("My letter : %c\n", s1.myLetter);
	sleep(1);
	//usleep(700000);
	gettimeofday(&endTime, NULL);
	diffTime = ( endTime.tv_sec - startTime.tv_sec ) + (( endTime.tv_usec - startTime.tv_usec) / CLOCKS_PER_SEC); // 1000000 );
	printf("%f s\n", diffTime);

	gettimeofday(&startTime, NULL);
	s1.myNum = 15;
	s1.myLetter = 'A';

	printf("My number : %d\n", s1.myNum);
	printf("My letter : %c\n", s1.myLetter);
	usleep(700000);
	gettimeofday(&endTime, NULL);
	diffTime_2 = (endTime.tv_usec - startTime.tv_usec);
	printf("%f s\n", diffTime_2);
	return 0;
}


