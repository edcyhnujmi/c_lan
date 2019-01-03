#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[2][3] = { {4,2,3},{5,2,3} };
	int(*p)[3] = arr;
	printf("ary를 이용한 출력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", arr[i][j]);
		}
		puts("");
	}
	printf("\np를 이용한 출력\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", p[i][j]);
		}
		puts("");
	}
	puts("");

	return 0;
}