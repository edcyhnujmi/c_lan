#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include  <stdlib.h>
int main() {
	char fname1[100],fname2[100];
	FILE *f1,*f2;
	int count=0,grade=0;
	printf("������ ���ϸ��� �Է��ϼ���: ");
	scanf("%s", &fname1);
	if (fopen_s(&f1, fname1, "r") != 0)
	{
		printf("����1�� ������ �ʽ��ϴ�.\n");
		exit(1);
	};
	printf("\n��� ���ϸ��� �Է��ϼ���: ");
	scanf("%s", &fname2);
	if (fopen_s(&f2, fname2, "w") != 0)
	{
		printf("����2�� ������ �ʽ��ϴ�.\n");
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
	printf("90���̻� : %d\n", count);
	return 0;
}