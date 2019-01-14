#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sum = 0;
	static int i = 0;
	if (argc <= 2) {
		printf("최소 2개의 정수를 입력하시오.");
	}
	else {
		for (i = 1; i <argc; i++) {
			sum = sum + atoi(argv[i]);
		}
		printf("%d개의 정수의 합은 %d입니다.\n", i - 1, sum);
	}
}