// file: mlineio.c 
///memo
////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char fname[] = "grade.txt";
	FILE *f;
	char names[80];
	int cnt = 0;
		
	if ( (f = fopen(fname, "w")) == NULL )  	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};

	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	//// ���� �̷� ���·� ��
	fgets(names, 80, stdin); ///stdin <- keyboard
	while ( !feof(stdin) )	//ǥ���Է¿��� EOF: ctrl + Z
	{		///feof -> file end of file
		fprintf(f, "%d ", ++cnt); ///f���̸� ���� ������, ���������͸� �߰��ǰ� ���� ����� ����
		fputs(names, f);		
		fgets(names, 80, stdin);	
	}
	////
	fclose(f);

	return 0;
}
