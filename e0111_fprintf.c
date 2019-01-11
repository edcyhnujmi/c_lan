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
	puts("파일 이름을 입력하셔요: ");
	scanf("%s", &fname);
	if ( (f = fopen(fname, "w")) == NULL ) 	{
		printf("파일이 열리지 않습니다.\n");
		exit(1); ///비정상종료일 때
	};	
	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	scanf("%s %d %d", name, &point1, &point2);	
	
	fprintf(f, "%d %s %d %d\n",
				++cnt, name, point1, point2);
	fclose(f);

	/*

	if (fopen_s(&f, fname, "r") != 0)	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};
	
	fscanf_s(f, "%d %s %d %d\n", &cnt, name, 30, &point1, &point2);
	
	fprintf(stdout, "\n%6s%16s%10s%8s\n",  ////=printf
					"번호", "이름", "중간", "기말");
	fprintf(stdout, "%5d%18s%8d%8d\n",
					cnt, name, point1, point2);
	fclose(f);

	*/
	return 0;
}
