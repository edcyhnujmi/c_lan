#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("임의의 정수 입력: ");
	scanf("%d", &a);

	printf("\n");
	printf("값 %d의 하위 2 바이트의 값을 16진수로 출력 : %0x\n", a, a&0xffff);
}