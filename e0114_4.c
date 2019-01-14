#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int *buildAry(int size);
int compareAry(int *ary1, int *ary2, int size);

int main() {
	
	int n,*A, *B;
	puts("�迭 ũ�� �Է�");
	scanf("%d", &n);
	puts("�迭 A �Է�");
	A = buildAry(n);
	puts("�迭 B �Է�");
	B = buildAry(n);
	int compare=compareAry(A, B, n);
	if (compare == 1) {
		puts("�迭 A,B ������ ��ġ�մϴ�.");
	}
	else
		puts("�迭 A,B ������ ��ġ�����ʽ��ϴ�.");

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