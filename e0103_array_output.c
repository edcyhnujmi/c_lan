#include <stdio.h>

int main() {
	double x[][3] = { {1,2,3},{7,8,9},{4,5,6},{10,11,12} };
	printf("%d\n", sizeof(x[0]));
	int abc[4][3] = { {1,2,3},{5,6,7},{9,10,11},{13,14,15} };
	int rowsize = sizeof(abc) / sizeof(abc[0]);
	int colsize = sizeof(abc[0]) / sizeof(abc[0][0]);
	int i, *p;

	for (i = 0; i < rowsize; i++) {
		printf("%p ", abc[i]);
		printf("\n\n");
	}
	p = abc[1];
	for (i = 0; i < colsize; i++) {
		printf("%d\n", *p++); // 자료 순서대로 출력
	}

	return 0;
	}