// file: arraymalloc.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	int i, sum = 0;
	printf("입력할 점수의 개수를 입력 >> ");
	scanf("%d", &n);

	int *ary = NULL;	
	if ( (ary = (int *)malloc(sizeof(int)*n)) == NULL ) 	{ ///malloc(sizeofmemory)
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	};	

	printf("%d개의 점수 입력 >> ", n);	
	for (i = 0; i < n; i++) 	{
		scanf("%d", (ary + i));
		sum += *(ary + i); //sum += ary[i];
	}
	
	printf("입력된 점수: ");
	for (i = 0; i < n; i++)
		printf("%d ", *(ary + i));
	printf("\n");

	printf("합: %d  평균: %.1f\n", sum, (double)sum / n);
		
	free(ary); ///동적할당은 다 쓰고 나면 해제하기
	return 0;
}
