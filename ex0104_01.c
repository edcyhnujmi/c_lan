#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 5
void strAryPtr(char str[][21], int n);
int main() {
	int i, n = num;
    char str[num][21];
	printf("���ڿ� �Է� %d��:\n",n);
	for (i = 0; i < n; i++) {
		scanf("%s", str[i]);
	}
	printf("���ڿ� ���:\n");
	strAryPtr(str, n);

	return 0;
}

void strAryPtr(char str[][21], int n) {
	for (int i = 0; i < n; i++) {
		printf("%s\n", str[i]);
	}
}
