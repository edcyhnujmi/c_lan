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
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};
	puts("���ڸ� �Է��ϴٰ� �����Ϸ��� x�� �Է� >>");		
	while ((ch = getchar()) != 'x')///getchar ���� �ϳ� �Է� ����
		fputc(ch, f);	
	fclose(f); puts(""); ///�ݰ�

	
	if (fopen_s(&f, fname, "r") != 0) ///�б������ �ٽ� ������ 
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};		
	while ((ch = fgetc(f)) != EOF)	
		_putch(ch);	 
	fclose(f); puts("");

	return 0;
}
