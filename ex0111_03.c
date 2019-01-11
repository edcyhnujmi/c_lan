#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* doubling(int a[], int size);

int main() {
	int size;
	int *a, *b;
	puts("[input]");
	printf("배열의 크기를 입력하세요:\n");
	scanf("%d", &size);
	puts("");
	a = (int*)malloc(sizeof(int)*size);
	printf("배열 데이터를 입력하세요:\n");
	for (int i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	b = doubling(a, size);
	puts("\n[output]");
	printf("a[%d]:\n", size);
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n\nb[%d]:\n", size);
	for (int i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}
	puts("");
	free(a);
	free(b);

	return 0;
}

int* doubling(int a[], int size) {
	int *b;
	b = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++) {
		b[i] = a[i] * 2;
	}
	return b;
}