#include <stdio.h>
#include <stdlib.h>

int strToInt(char a[]);

int main() {
	printf("4�ڸ� �̻��� ������ �Է��Ͻÿ� >> ");
	char str[50];
	gets_s(str, 50);
	printf("\n�Է��� ���ڿ� \"%s\"�� ���� %d�� ��ȯ�Ͽ����ϴ�.\n",str,strToInt(str));
}

int strToInt(char a[]) {
	int i = atoi(a);
	return i;
}