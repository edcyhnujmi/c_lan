// file: fopen.c 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main()
{
	char *fname = "a.txt"; 
	FILE *spData; 

	char name[30] = "������";
	int point = 99;
	
	if ( (spData = fopen(fname, "w")) == NULL ) ///file open
	//if (fopen_s(&spData, fname, "w") != 0)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};
		
	fprintf(spData, "�̸�: %s\n", name);
	fprintf(spData, "����: %d\n", point);

	fclose(spData);
	
	return 0;
}
