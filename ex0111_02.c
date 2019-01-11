#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int size,data1,w=0;
	int *A;
	puts("[input]");
	printf("배열의 크기를 입력하시오:\n");
	scanf("%d", &size);
	puts("");
	A = (int*)malloc(size + 1);
	printf("데이터 %d개를 입력하시오:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d",&A[i]);
	}
	A[size] = '\0';
	printf("\n검색할 데이터를 입력하시오:\n");
	scanf("%d", &data1);
	for (int i = 0;i<size;i++) {
		if (A[i] == data1) {
			w = i;
			printf("\n[output]\n%d의 위치는 [%d]입니다.\n", data1, w);
			break;
		}	
	}
	
	return 0;
}