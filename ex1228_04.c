#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, j;
	char a;
	do {
		printf("���� �Է�:\n");
		scanf("%i", &x);
		printf("\n��� = ");

		for (int i = 31; i >= 0; i--) {
			j = ((x >> i) & 1 ? '1' : '0');
			printf("%c", j);
			if (i % 8 == 0) {
				putchar(' ');
			}
		}
		printf("(%d)\n��� ���� �Ͻðڽ��ϱ� ? (Y / N): ", x);
		scanf(" %c", &a);
		printf("\n");
	} while (!(a == 'N' || a == 'n'));
	printf("���α׷��� �����մϴ�.\n");
		return 0;
}