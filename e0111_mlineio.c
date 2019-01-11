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
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};

	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	//// 거의 이런 형태로 씀
	fgets(names, 80, stdin); ///stdin <- keyboard
	while ( !feof(stdin) )	//표준입력에서 EOF: ctrl + Z
	{		///feof -> file end of file
		fprintf(f, "%d ", ++cnt); ///f붙이면 파일 관련임, 파일포인터만 추가되고 쓰는 방법은 같음
		fputs(names, f);		
		fgets(names, 80, stdin);	
	}
	////
	fclose(f);

	return 0;
}
