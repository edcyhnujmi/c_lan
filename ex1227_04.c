#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;

	printf("a: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	printf("c: ");
	scanf("%lf", &c);
	if (a == 0 && b == 0)
		printf("do not exist.");
	else if (a == 0 && b!=0)
		printf("\nx=%f",(-(c)/b));
	else if ((b)*(b)-4*(a)*(c)<0)
		printf("There is no real root.");
	else
		printf("\nx1 = %f, x2 = %f",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));

	printf("\n");
}
