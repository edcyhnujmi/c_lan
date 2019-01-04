#include <stdio.h>
#include <stdlib.h>

int strToInt(char a[]);

int main() {
	printf("4자리 이상의 정수를 입력하시오 >> ");
	char str[50];
	gets_s(str, 50);
	printf("\n입력한 문자열 \"%s\"를 정수 %d로 변환하였습니다.\n",str,strToInt(str));
}

int strToInt(char a[]) {
	int i = atoi(a);
	return i;
}