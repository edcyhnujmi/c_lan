/* fscanf example */
///memo
///rewind, w+
#include <stdio.h>

int main()
{
	char str[80];
	float f;
	FILE * pFile;
	
	//pFile = fopen("myfile.txt", "w+");
	fopen_s(&pFile,"myfile.txt","w+");///w+ ����� ��� ����
	fprintf(pFile, "%f %s", 3.1416, "PI");
	rewind(pFile); ///�ּ�ó���� ó������ �� ���ư��⿡ ���� �� �� ����
	fscanf_s(pFile, "%f", &f);
	fscanf_s(pFile, "%s", str,80);///���ڿ��� ũ�� �߰�
	fclose(pFile);
	printf("I have read: %f and %s \n", f, str);
	return 0;
}