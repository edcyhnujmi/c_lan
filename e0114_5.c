#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sortary(int *ary, int size);
void prtary(int *ary, int size);

int main() {
	int size, *a;
	puts("�����迭�� ũ�⸦ �Է��ϼ���:");
	scanf("%d", &size);
	a = (int*)(malloc(sizeof(int)*size));
	for (int i = 0; i < size; i++) {
		printf("������ �Է� %d:", i + 1);
		scanf("%d", &a[i]);
	}
	sortary(a, size);
	puts("\n���� �� ��� :");
	prtary(a, size);
}


void sortary(int *ary, int size) {
	int a;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j < size; j++) {
			if (ary[i] > ary[j]) {
				a = ary[i];
				ary[i] = ary[j];
				ary[j] = a;
			}
		}
	}
}
void prtary(int *ary, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", ary[i]);
	}
}