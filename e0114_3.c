#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int *buildAry(int size);
int findMin(int *ary, int size);

int main() {
	int size;
	int *ary;
	printf("�迭 ũ�� �Է�:\n");
	scanf("%d", &size);
	puts("������ �Է�:\n");
	ary = buildAry(size);
	printf("�ּڰ� ��� : %d\n",findMin(ary, size));

	return 0;
}

int *buildAry(int size)
{
	int *ary;
	ary = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &ary[i]); //a+i
	}
	return ary;
}
int findMin(int *ary, int size)
{
	int Min = ary[0];
	for (int i = 1; i < size; i++) {
		if (Min > ary[i]) {
			Min = ary[i];
		}
	}
	return Min;
}