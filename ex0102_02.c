#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[5][5] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 },{ 13,14,15,16 } };
	printf("�ʱ�ȭ�� ������ ���\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%4d ", arr[i][j]);
		}
		puts("");
	}
	int (*p)[5] = arr;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			p[i][4] += arr[i][j];
			p[4][j] += arr[i][j];
			p[4][4] += arr[i][j];
		}
	}
	printf("���� ��, ���� �� �׸��� ��� ���� ���� �� ���\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%4d ", arr[i][j]);
		}
		puts("");
	}
}