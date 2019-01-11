/* feof example: byte counter */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE * pFile;
	int n = 0;
	pFile = fopen("myfile.txt", "rb");///rb�� b: binary �ε� r�� �ᵵ ��
	if (pFile == NULL) perror("Error opening file");
	else
	{
		while (fgetc(pFile) != EOF) {
			++n;
		}
		if (feof(pFile)) {///feof: null�о�� end of file�̶� �ν��ϴ� ����
			puts("End-of-File reached.");
			printf("Total number of bytes read: %d\n", n);
		}
		else puts("End-of-File was not reached.");
		fclose(pFile);
	}
	return 0;
}