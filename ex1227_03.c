#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("������ ���� �Է�: ");
	scanf("%d", &a);

	printf("\n");
	printf("�� %d�� ���� 2 ����Ʈ�� ���� 16������ ��� : %0x\n", a, a&0xffff);
}