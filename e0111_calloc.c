// file: calloc.c
///memo
#include <stdio.h>
#include <stdlib.h>
void myprintf(int *ary, int n);

int main(void)
{
	int *ary = NULL;
	
	//if ((ary = calloc(3, sizeof(int))) == NULL)  
	if ( (ary = malloc(3*sizeof(int))) == NULL )  ///calloc은 알아서 초기화해줌
	{
		printf("메모리 할당이 문제가 있습니다.\n");
		exit(EXIT_FAILURE);
	}
	myprintf(ary, 3); 	
	free(ary);

	return 0;
}

void myprintf(int *ary, int n) 
{
	int i;
	for (i = 0; i < n; i++)
		printf("ary[%d] = %d\n", i, *(ary + i));
}

