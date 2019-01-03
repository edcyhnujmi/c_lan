#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("integers for sum (end: 0):\n");
	int i, sum = 0;

	while (i!=0){
		scanf("%d", &i);
		sum = sum + i;
	}
	puts("");
	printf("sum: %d", sum);
	puts("");
}
