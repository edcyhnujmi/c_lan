#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int aryA[4][4];
	int aryB[4][4];
	printf("��� A�� �Է��ϼ���:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &aryA[i][j]);
		}
	}
	puts("");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			aryB[j][i] = aryA[i][j];
		}
	}
	printf("��� B�� ����մϴ�.\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", aryB[i][j]);
		}
		puts("");
	}

}