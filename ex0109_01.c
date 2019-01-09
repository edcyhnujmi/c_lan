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
	printf("A의 좌표 값을 입력하시오:\n");
	scanf("%lf %lf",&A.x, &A.y);
   printf("\nB의 좌표 값을 입력하시오 :\n");
   scanf("%lf %lf", &B.x, &B.y);
   AB.slope = (B.y - A.y) / (B.x - A.x);
   AB.yintercept = A.y - AB.slope*A.x;

   printf("\n두 점 A,B를 지나는 직선의 기울기는 %.2f이고 y절편은 %.2f입니다.\n", AB.slope, AB.yintercept);
}