#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct fraction {
	int d;
	int n;
};
typedef struct fraction fraction;

int compare(fraction f1, fraction f2);
int main() {
	printf("[input]\n");
	fraction f1, f2;
	scanf("%d/%d", &f1.n, &f1.d);
	scanf("%d/%d", &f2.n, &f2.d);
	printf("\n[output]\n%d\n",compare(f1,f2));

}

int compare(fraction f1, fraction f2) {
	double c = f1.n*f2.d / (f1.d*f2.n);
	if (c > 1)
		return -1;
	else if (c < 1)
		return 1;
	else
		return 0;
}

int compare(fraction f1, fraction f2) {
	double test1, test2;
	test1 = f1.n / (double)f1.d;

}