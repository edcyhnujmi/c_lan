#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%c", &ch);
	printf("\n");
	if ('A' <= ch&&ch <= 'Z')
		printf("%c�� �빮���Դϴ�.", ch);
	else if ('a' <= ch&&ch <= 'z')
		printf("%c�� �ҹ����Դϴ�.", ch);
	else if ('0' <= ch&&ch <= '9')
		printf("%c�� ����(0~9)�Դϴ�.", ch);
	else
		printf("%c�� ��Ÿ�����Դϴ�.", ch);
	printf("\n");

	return 0;
}