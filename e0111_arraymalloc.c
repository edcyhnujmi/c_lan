// file: arraymalloc.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	int i, sum = 0;
	printf("�Է��� ������ ������ �Է� >> ");
	scanf("%d", &n);

	int *ary = NULL;	
	if ( (ary = (int *)malloc(sizeof(int)*n)) == NULL ) 	{ ///malloc(sizeofmemory)
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	};	

	printf("%d���� ���� �Է� >> ", n);	
	for (i = 0; i < n; i++) 	{
		scanf("%d", (ary + i));
		sum += *(ary + i); //sum += ary[i];
	}
	
	printf("�Էµ� ����: ");
	for (i = 0; i < n; i++)
		printf("%d ", *(ary + i));
	printf("\n");

	printf("��: %d  ���: %.1f\n", sum, (double)sum / n);
		
	free(ary); ///�����Ҵ��� �� ���� ���� �����ϱ�
	return 0;
}
