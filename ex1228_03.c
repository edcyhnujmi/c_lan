#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x,j;
	printf("���� �Է�:\n");
	scanf("%d", &x);
	printf("\n��� = ");

	for (int i = 31; i >=0; i--) {
		j = ((x >> i)&1 ? '1' : '0');
		printf("%c", j);
		if (i % 8 == 0) {
			putchar(' ');
		}
	}
	printf("(%d)\n",x);
}