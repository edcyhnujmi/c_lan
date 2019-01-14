#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int *buildAry(int size);
int findMin(int *ary, int size);

int main() {
	int size;
	int *ary;
	printf("배열 크기 입력:\n");
	scanf("%d", &size);
	puts("데이터 입력:\n");
	ary = buildAry(size);
	printf("최솟값 출력 : %d\n",findMin(ary, size));

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