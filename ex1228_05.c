#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	printf(">>> start <<<<<\n");
	int n = 0;
	char b;
	srand((unsigned)time(NULL));
	char a = (char)(97 + rand() % 26);
	do {
		printf("\nalphabet:\n");
		scanf(" %c", &b);
		n++;
		if (b > a) {
			printf("it's smaller than %c.\n",b);
		}
		else if (b < a) {
			printf("it's bigger than %c.\n",b);
		}
	} while (!(b == a));
	printf("Congratulations! trial :%dtime(s)!\n", n);
	return 0;
}
