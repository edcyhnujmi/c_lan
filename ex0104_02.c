#include <stdio.h>
#include <string.h>

int myStrLen(char *str);

int main() {
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	char str[80];
	gets_s(str,80);
	puts("");
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n", myStrLen(str));

	return 0;
}

int myStrLen(char *str) {
	int i = 0;
	while (1) {
		if (str[i] =='\0')
			break;
		i++;
	}
	return i;
}