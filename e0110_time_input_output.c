#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int hr;
	int min;
	int sec;
}CLOCK;
 
void increment(CLOCK*clock);
void show(CLOCK*clock);

int main() {
	CLOCK now;
	printf("현재시간을 입력하세요(ex. 13:58:59)\n");
	scanf("%d:%d:%d", &now.hr, &now.min, &now.sec);
	printf("\n디지털 시계 : \n");
	for (int i = 0; i < 6; i++) {
		increment(&now);
		show(&now);
	}

	return 0;
}

void increment(CLOCK*clock) {
	(clock->sec)++;
	if (clock->sec == 60) {
		clock->sec = 0;
		(clock->min)++;
	}
	if (clock->min == 60) {
		clock->min = 0;
		(clock->hr)++;
	}
	if (clock->hr == 24) {
		clock->hr = 0;
	}
}
void show(CLOCK*clock) {
	printf("%02d:%02d:%02d\n", clock->hr, clock->min, clock->sec);
	//02
}