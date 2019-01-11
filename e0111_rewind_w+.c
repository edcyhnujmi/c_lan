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
	fopen_s(&pFile,"myfile.txt","w+");///w+ 입출력 모두 가능
	fprintf(pFile, "%f %s", 3.1416, "PI");
	rewind(pFile); ///주석처리시 처음으로 안 돌아갔기에 값을 더 못 읽음
	fscanf_s(pFile, "%f", &f);
	fscanf_s(pFile, "%s", str,80);///문자열은 크기 추가
	fclose(pFile);
	printf("I have read: %f and %s \n", f, str);
	return 0;
}