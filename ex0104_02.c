#include <stdio.h>
#include <string.h>

int myStrLen(char *str);

int main() {
	printf("한 줄의 문장을 입력하시오: ");
	char str[80];
	gets_s(str,80);
	puts("");
	printf("입력한 문자열의 길이는 %d입니다.\n", myStrLen(str));

	return 0;
}

int myStrLen(char *str) {
	int i = 0;
	while (1) {
		if (str[i] =='\0')
			break;
		i++;
	}
	return i;
}