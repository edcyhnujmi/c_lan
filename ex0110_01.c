#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int n; //분자
	int d; //분모
}FR;

FR getFR();
FR multFR(FR fr1, FR fr2);
void printFr(FR*pFr1, FR*pFr2, FR*pRes);

int main() {
	FR a, b, res;
	
	printf("[input]\n");
	a = getFR();
	b = getFR();

	res= multFR(a, b);
	printf("\n[output]\n");
	printFr(&a, &b, &res);

	return 0;
}

FR getFR() {
	FR a;
	scanf("%d/%d", &a.n, &a.d);

	return a;
}
FR multFR(FR fr1, FR fr2) {
	FR res;
	res.n = fr1.n*fr2.n;
	res.d = fr1.d*fr2.d;

	return res;
}
void printFr(FR*pFr1, FR*pFr2, FR*pRes) {
	printf("%d/%d  * %d/%d = %d/%d\n",pFr1->n,pFr1->d,pFr2->n,pFr2->d,pRes->n,pRes->d);
}