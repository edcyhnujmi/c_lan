#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x,y;

	printf("�Է�(x��ǥ,y��ǥ):");
	scanf("%d" "%d", &x,&y);
	printf("\n");
	if (0 < x&&y > 0)
		printf("1��и�");
	else if (x < 0 && y>0)
		printf("2��и�");
	else if (x < 0 && y < 0)
		printf("3��и�");
	else if (x > 0 && y < 0)
		printf("4��и�");
	else if (x == 0 || y == 0)
		printf("0�� �ƴ� ���� �Է��Ѵ�.");
	printf("\n");
	
	return 0;
}