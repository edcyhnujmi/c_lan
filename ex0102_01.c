#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("0~9������ ���� 10���� �Է��ϼ���.\n");
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
	printf("0~9���̿� ���� ���� �Էµ� �� : %d\n",d);
	printf("%d�� �󵵼� : %d\n",d,c);

}