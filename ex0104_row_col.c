#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c[2][15];
	for (int i = 0; i < 2; i++) {
		printf("이름입력 : ");
		scanf("%s", &c[i]);
	}
	for (int i = 0; i < 2; i++) {
		printf("%s\n", c[i]);
	}
}