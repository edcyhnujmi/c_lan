#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct point {
	double x;
	double y;
};

struct line {
	double slope;
	double yintercept;
};
int main() {
	
	struct point A,B;
	struct line AB;
	printf("A�� ��ǥ ���� �Է��Ͻÿ�:\n");
	scanf("%lf %lf",&A.x, &A.y);
   printf("\nB�� ��ǥ ���� �Է��Ͻÿ� :\n");
   scanf("%lf %lf", &B.x, &B.y);
   AB.slope = (B.y - A.y) / (B.x - A.x);
   AB.yintercept = A.y - AB.slope*A.x;

   printf("\n�� �� A,B�� ������ ������ ����� %.2f�̰� y������ %.2f�Դϴ�.\n", AB.slope, AB.yintercept);
}