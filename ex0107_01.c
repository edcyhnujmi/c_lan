#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main() {
	int n;
	printf("정수 n을 입력하세요: ");
	scanf("%d", &n);
	if (n < 1) {
		printf("error\n");
		return 0;
	}
	printf("1에서 %d까지의 누적합 = %d\n", n,sum(n));
}

int sum(int n) {
	static int i = 0;
	i++;
	if (n == 1) {
		printf("\n재귀함수 호출 횟수는 %d입니다.\n", i);
		return n;
	}
	else {
		return (n + sum(n-1));
	}	
}