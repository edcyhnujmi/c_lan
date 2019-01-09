#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int n; //분자
	int d; //분모
}FR;

void prtFr(FR fr1, FR fr2);

int main() {
	
	puts("[input]");
	FR fr1, fr2;
	scanf("%d/%d", &fr1.n, &fr1.d);
	scanf("%d/%d", &fr2.n, &fr2.d);
	printf("\n[output]\n");
	prtFr(fr1, fr2);
}

void prtFr(FR fr1, FR fr2) {
	FR fr3;
	fr3.n = fr1.n*fr2.n;
	fr3.d = fr1.d*fr2.d;
	printf("%d/%d * %d/%d = %d/%d\n", fr1.n, fr1.d, fr2.n, fr2.d, fr3.n, fr3.d);
}