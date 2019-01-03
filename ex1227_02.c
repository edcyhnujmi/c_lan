#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x,y;

	printf("입력(x좌표,y좌표):");
	scanf("%d" "%d", &x,&y);
	printf("\n");
	if (0 < x&&y > 0)
		printf("1사분면");
	else if (x < 0 && y>0)
		printf("2사분면");
	else if (x < 0 && y < 0)
		printf("3사분면");
	else if (x > 0 && y < 0)
		printf("4사분면");
	else if (x == 0 || y == 0)
		printf("0이 아닌 값을 입력한다.");
	printf("\n");
	
	return 0;
}