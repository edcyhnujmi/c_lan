#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include  <stdlib.h>
int main() {
	char fname1[100],fname2[100];
	FILE *f1,*f2;
	int count=0,grade=0;
	printf("데이터 파일명을 입력하세요: ");
	scanf("%s", &fname1);
	if (fopen_s(&f1, fname1, "r") != 0)
	{
		printf("파일1이 열리지 않습니다.\n");
		exit(1);
	};
	printf("\n출력 파일명을 입력하세요: ");
	scanf("%s", &fname2);
	if (fopen_s(&f2, fname2, "w") != 0)
	{
		printf("파일2가 열리지 않습니다.\n");
		exit(1);
	};
	while (!feof(f1)) {
		fscanf(f1,"%d", &grade);
		if (grade >= 90) {
			fprintf(f2, "%d\n", grade);
			printf("%d\n", grade);
			count++;
		}	
	}
	printf("90점이상 : %d\n", count);
	return 0;
}