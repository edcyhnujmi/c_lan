#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("0~9사이의 정수 10개를 입력하세요.\n");
	int a[10], b[10] = {0};
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int *p= &b[0];
	for (int i = 0; i < 10; i++) {
		int j = a[i];
		p[j]++;
	}
	int d = 1, c = p[0];
	for (int i = 0; i < 10; i++) {
		if (c < p[i]){
			c = p[i];
			d = i;
		}
	}
	printf("0~9사이에 가장 많이 입력된 수 : %d\n",d);
	printf("%d의 빈도수 : %d\n",d,c);

}