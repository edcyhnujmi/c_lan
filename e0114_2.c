#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *f1;
	char ch[100];
	f1 = fopen("write.txt", "w");

	if (f1 == '\0') {
		printf("error f1");
		exit(1);
	}
	else {
		while (!feof(stdin)) { //ctrl+Z to exit
			fgets(ch, 100, stdin);
			fputs(ch, f1);
		}
	}
	printf("\n\n작업종료\n");

	return 0;
}