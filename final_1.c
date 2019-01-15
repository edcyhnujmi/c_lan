#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char*argv[]) {
	FILE *f;
	int num = 0, sum = 0, a, size;
	char *filename;

	if (argv[1] == NULL) {
		printf("file error\n");

		return 0;
	}

	size = strlen(argv[1]) + 1;
	filename = (char*)(malloc(sizeof(char)*size));
	strcpy(filename, argv[1]);
	filename[strlen(argv[1])] = '\0';
	
	f = fopen(filename, "r");
	if (f == NULL) {
	}
	else {
		while (!feof(f)) {
			fscanf(f, "%d", &a);
			++num;
			sum = sum + a;
		}
	}
	printf("데이터 개수 : %d개\n", num);
	printf("데이터(정수)의 합: %d\n", sum);
	free(filename);

	return 0;
}//C:\Users\basic\Desktop\p\Debug