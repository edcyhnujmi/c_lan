#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5
void print_words(char*w[]);

int main() {
	char word[80];
	char *w[N];
	int i;

	puts("문자열 입력: ");
	for (i = 0; i < N; i++) {
 		scanf("%s", &word); //gets_s(word,80);
		int num = strlen(word) + 1;
		w[i] = (char*)(malloc((sizeof(char))*num)); //w[i](char*)(strlen(word)+1);
		strcpy_s(w[i],num,word);
	}
	puts("\n출력: \n");
	print_words(w);

	return 0;
}

void print_words(char*w[]) { //char*w !=char*w[]
	for (int i = 0; i < N; i++) {
		printf("%s\n", w[i]);
	}
}