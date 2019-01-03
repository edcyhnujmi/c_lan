#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	printf("문자를 입력하세요:");
	scanf("%c", &ch);
	printf("\n");
	if ('A' <= ch&&ch <= 'Z')
		printf("%c는 대문자입니다.", ch);
	else if ('a' <= ch&&ch <= 'z')
		printf("%c는 소문자입니다.", ch);
	else if ('0' <= ch&&ch <= '9')
		printf("%c는 숫자(0~9)입니다.", ch);
	else
		printf("%c는 기타문자입니다.", ch);
	printf("\n");

	return 0;
}