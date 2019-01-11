// file: fgetc.c 
///memo
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char fname[] = "char.txt"; 
	FILE *f;  
	int ch;
		
	if ( (f = fopen(fname, "w")) == NULL ) 
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};
	puts("문자를 입력하다가 종료하려면 x를 입력 >>");		
	while ((ch = getchar()) != 'x')///getchar 문자 하나 입력 받음
		fputc(ch, f);	
	fclose(f); puts(""); ///닫고

	
	if (fopen_s(&f, fname, "r") != 0) ///읽기용으로 다시 열었음 
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};		
	while ((ch = fgetc(f)) != EOF)	
		_putch(ch);	 
	fclose(f); puts("");

	return 0;
}
