#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, j;
	char a;
	do {
		printf("정수 입력:\n");
		scanf("%i", &x);
		printf("\n출력 = ");

		for (int i = 31; i >= 0; i--) {
			j = ((x >> i) & 1 ? '1' : '0');
			printf("%c", j);
			if (i % 8 == 0) {
				putchar(' ');
			}
		}
		printf("(%d)\n계속 수행 하시겠습니까 ? (Y / N): ", x);
		scanf(" %c", &a);
		printf("\n");
	} while (!(a == 'N' || a == 'n'));
	printf("프로그램을 종료합니다.\n");
		return 0;
}