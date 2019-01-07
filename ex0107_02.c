#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define num 100
void strConvert(char str[]);

int main(){
	printf("영문 문장을 입력하세요. ->\n");
	char str[num];
	gets_s(str, num);
	printf("위에서 입력한 문자열에섯 대문자와 소문자를 반대로 변환하면 ->\n");
	strConvert(str);
    printf("%s\n", str);
}

void strConvert(char str[]) {
	for (int i = 0; i<num; i++) {
		char ch = str[i];
		str[i] = tolower(str[i]);
		if (str[i] == ch) {
			str[i] = toupper(str[i]);
		}
	}
}