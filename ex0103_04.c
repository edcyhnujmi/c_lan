#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 5
int isEqualAry(int a[], int b[], int n /* �迭 ���� ��*/);

int main() {
	int n = num;
	int a[num], b[num];
	printf("�迭 a�� ���� ���� %d�� �Է�\n",num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &*a);
	}
	printf("\n�迭 b�� ���� ���� %d�� �Է�\n",num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &*b);
	}
	if (isEqualAry(a,b, n) ==1) {
		printf("\na,b�� �ٸ� ���� ������ �迭�Դϴ�!\n");
	}
	else if (isEqualAry(a, b, n) == 0) {
		printf("\na,b�� ���� ���� ������ �迭�Դϴ�!\n");
	}
}

int isEqualAry(int a[], int b[], int n /* �迭 ���� ��*/) {
	for (int i = 0; i < n; i++) {
		if (a[i] !=b[i] ) {
			return 1;
			break;
		}
	}
	return 0;
}