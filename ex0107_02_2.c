//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define num 100
void strConvert(char str[]);

int main() {
	printf("���� ������ �Է��ϼ���. ->\n");
	char str[num];
	gets_s(str, num);
	printf("������ �Է��� ���ڿ����� �빮�ڿ� �ҹ��ڸ� �ݴ�� ��ȯ�ϸ� ->\n");
	strConvert(str);
	printf("%s\n", str);
}

void strConvert(char str[]) {
	int a = strlen(str);//
	for (int i = 0; i<a; i++) {//
		char ch = str[i];
		str[i] = tolower(str[i]);
		if (str[i] == ch) {
			str[i] = toupper(str[i]);
		}
	}
}