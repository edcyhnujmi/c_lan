#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char A;
	do {
		printf("0~9������ ���� 10���� �Է��ϼ���.\n");
		int a[10], b[10] = { 0 };
		for (int i = 0; i < 10; i++) {
			scanf("%d", &a[i]);
			while (!(a[i] == 0 || a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 4 || a[i] == 5 || a[i] == 6 || a[i] == 7 || a[i] == 8 || a[i] == 9)) {
				printf("��ȿ�� ���� �ƴմϴ�. �ٽ� �Է��ϼ���\n");
			    scanf("%d", &a[i]);
			}
		}
		int *p = &b[0];
		for (int i = 0; i < 10; i++) {
			int j = a[i];
			p[j]++;
		}
		int d = 1, c = p[0];
		for (int i = 0; i < 10; i++) {
			if (c < p[i]) {
				c = p[i];
				d = i;
			}
		}
		printf("0~9���̿� ���� ���� �Էµ� �� : %d\n", d);
		printf("%d�� �󵵼� : %d\n", d, c);
		do {
			printf("��� �����ұ�� (Y/N) ? ");
			scanf(" %c", &A);
			if (A == 'N') {
				break;
			}
			else if (A == 'Y') {
				break;
		}
			else {
				printf("\nY �Ǵ� N�� �Է����ּ���.");
			}
		} while (!(A=='N'||A=='Y'));
		} while (!(A=='N'));
}