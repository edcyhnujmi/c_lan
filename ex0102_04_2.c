#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define col 2
#define row 3

int main() {
	int arr[col][row] = { { 100,200,300 },{ 400,500,600 } };
	int *p;
	p = arr[0];
	printf("ary를 이용한 출력\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("%3d ", arr[i][j]);
		}
		puts("");
	}
	printf("\np를 이용한 출력\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("%3d ", *(p + row*i + j));
		}
		puts("");
	}
	return 0;
}