#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sum = 0;
	static int i = 0;
	if (argc <= 2) {
		printf("�ּ� 2���� ������ �Է��Ͻÿ�.");
	}
	else {
		for (i = 1; i <argc; i++) {
			sum = sum + atoi(argv[i]);
		}
		printf("%d���� ������ ���� %d�Դϴ�.\n", i - 1, sum);
	}
}