#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int *buildAry(int size);
int compareAry(int *ary1, int *ary2, int size);

int main() {
	
	int n,*A, *B;
	puts("배열 크기 입력");
	scanf("%d", &n);
	puts("배열 A 입력");
	A = buildAry(n);
	puts("배열 B 입력");
	B = buildAry(n);
	int compare=compareAry(A, B, n);
	if (compare == 1) {
		puts("배열 A,B 데이터 일치합니다.");
	}
	else
		puts("배열 A,B 데이터 일치하지않습니다.");

	return 0;
}

int *buildAry(int size) {
	int *A;
	A = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &A[i]);
	}
	return A;
}
int compareAry(int *ary1, int *ary2, int size) {
	for (int i = 0; i < size; i++) {
		if (ary1[i] != ary2[i]) {
			return 0;
		}
	}
	return 1;
}