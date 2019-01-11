// file: fopen.c 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main()
{
	char *fname = "a.txt"; 
	FILE *spData; 

	char name[30] = "강미정";
	int point = 99;
	
	if ( (spData = fopen(fname, "w")) == NULL ) ///file open
	//if (fopen_s(&spData, fname, "w") != 0)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};
		
	fprintf(spData, "이름: %s\n", name);
	fprintf(spData, "성적: %d\n", point);

	fclose(spData);
	
	return 0;
}
