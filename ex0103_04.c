#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 5
int isEqualAry(int a[], int b[], int n /* 배열 원소 수*/);

int main() {
	int n = num;
	int a[num], b[num];
	printf("배열 a를 위한 정수 %d개 입력\n",num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &*a);
	}
	printf("\n배열 b를 위한 정수 %d개 입력\n",num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &*b);
	}
	if (isEqualAry(a,b, n) ==1) {
		printf("\na,b는 다른 값을 가지는 배열입니다!\n");
	}
	else if (isEqualAry(a, b, n) == 0) {
		printf("\na,b는 같은 값을 가지는 배열입니다!\n");
	}
}

int isEqualAry(int a[], int b[], int n /* 배열 원소 수*/) {
	for (int i = 0; i < n; i++) {
		if (a[i] !=b[i] ) {
			return 1;
			break;
		}
	}
	return 0;
}