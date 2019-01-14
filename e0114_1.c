#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE *f1,*f2;
	int i;
	f1=fopen("file1.txt", "r");
	f2=fopen("copy.txt","w");
	if (f1 == '\0') {
		printf("error f1");
	}
	else {
		while (!(feof(f1))) {
			fscanf(f1,"%d",&i);
			fprintf(f2,"%d\n", i);
			}
		}

	return 0;
	}