#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int size,data1,w=0;
	int *A;
	puts("[input]");
	printf("�迭�� ũ�⸦ �Է��Ͻÿ�:\n");
	scanf("%d", &size);
	puts("");
	A = (int*)malloc(size + 1);
	printf("������ %d���� �Է��Ͻÿ�:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d",&A[i]);
	}
	A[size] = '\0';
	printf("\n�˻��� �����͸� �Է��Ͻÿ�:\n");
	scanf("%d", &data1);
	for (int i = 0;i<size;i++) {
		if (A[i] == data1) {
			w = i;
			printf("\n[output]\n%d�� ��ġ�� [%d]�Դϴ�.\n", data1, w);
			break;
		}	
	}
	
	return 0;
}