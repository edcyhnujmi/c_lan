// file: fprintf.c 
///memo
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char fname[100];
	///char fname[] = "grade.txt"; -> 
	FILE *f;
	char name[30];
	int point1, point2, cnt = 0;
	puts("���� �̸��� �Է��ϼſ�: ");
	scanf("%s", &fname);
	if ( (f = fopen(fname, "w")) == NULL ) 	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1); ///������������ ��
	};	
	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	scanf("%s %d %d", name, &point1, &point2);	
	
	fprintf(f, "%d %s %d %d\n",
				++cnt, name, point1, point2);
	fclose(f);

	/*

	if (fopen_s(&f, fname, "r") != 0)	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};
	
	fscanf_s(f, "%d %s %d %d\n", &cnt, name, 30, &point1, &point2);
	
	fprintf(stdout, "\n%6s%16s%10s%8s\n",  ////=printf
					"��ȣ", "�̸�", "�߰�", "�⸻");
	fprintf(stdout, "%5d%18s%8d%8d\n",
					cnt, name, point1, point2);
	fclose(f);

	*/
	return 0;
}
