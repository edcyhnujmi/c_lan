#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char A;
	do {
		printf("0~9사이의 정수 10개를 입력하세요.\n");
		int a[10], b[10] = { 0 };
		for (int i = 0; i < 10; i++) {
			scanf("%d", &a[i]);
			while (!(a[i] == 0 || a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 4 || a[i] == 5 || a[i] == 6 || a[i] == 7 || a[i] == 8 || a[i] == 9)) {
				printf("유효한 값이 아닙니다. 다시 입력하세요\n");
			    scanf("%d", &a[i]);
			}
		}
		int *p = &b[0];
		for (int i = 0; i < 10; i++) {
			int j = a[i];
			p[j]++;
		}
		int d = 1, c = p[0];
		for (int i = 0; i < 10; i++) {
			if (c < p[i]) {
				c = p[i];
				d = i;
			}
		}
		printf("0~9사이에 가장 많이 입력된 수 : %d\n", d);
		printf("%d의 빈도수 : %d\n", d, c);
		do {
			printf("계속 수행할까요 (Y/N) ? ");
			scanf(" %c", &A);
			if (A == 'N') {
				break;
			}
			else if (A == 'Y') {
				break;
		}
			else {
				printf("\nY 또는 N를 입력해주세요.");
			}
		} while (!(A=='N'||A=='Y'));
		} while (!(A=='N'));
}