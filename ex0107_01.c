#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main() {
	int n;
	printf("���� n�� �Է��ϼ���: ");
	scanf("%d", &n);
	if (n < 1) {
		printf("error\n");
		return 0;
	}
	printf("1���� %d������ ������ = %d\n", n,sum(n));
}

int sum(int n) {
	static int i = 0;
	i++;
	if (n == 1) {
		printf("\n����Լ� ȣ�� Ƚ���� %d�Դϴ�.\n", i);
		return n;
	}
	else {
		return (n + sum(n-1));
	}	
}