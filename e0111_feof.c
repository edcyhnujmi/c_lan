/* feof example: byte counter */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE * pFile;
	int n = 0;
	pFile = fopen("myfile.txt", "rb");///rb의 b: binary 인데 r만 써도 됨
	if (pFile == NULL) perror("Error opening file");
	else
	{
		while (fgetc(pFile) != EOF) {
			++n;
		}
		if (feof(pFile)) {///feof: null읽어야 end of file이라 인식하는 것임
			puts("End-of-File reached.");
			printf("Total number of bytes read: %d\n", n);
		}
		else puts("End-of-File was not reached.");
		fclose(pFile);
	}
	return 0;
}