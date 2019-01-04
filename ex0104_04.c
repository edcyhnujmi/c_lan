#include <stdio.h>
#include <string.h>
char reverse(char str[]);

int main() {
	printf("단어 입력: ");
	char str[80];
	(gets_s(str, 80));
	reverse(str);
	printf("\n단어 역순 출력: %s\n",str);
}

char reverse(char str[]){
	int i, j;
	char c;
	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	return str[j];
}