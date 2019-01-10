#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	char phone[20];
}data;

void printary(data P[], int num);

int main() {
	data P[10];
	int num = 0;
	for (int i = 0; i < 10; i++) {
		printf("이름 입력 :\n");
		scanf("%s", &P[i].name);
		if (!strcmp(P[i].name,"quit"))
			break;
		num++;
		printf("번호 입력 :\n");
		scanf("%s", &P[i].phone);
	}
	printf("output\n");
	printary(P, num);
	return 0;
}

void printary(data P[], int num) {
	for (int i = 0; i < num; i++) {
		printf("%s %s\n", P[i].name, P[i].phone);
	}
}