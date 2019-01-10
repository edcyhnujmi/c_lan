#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define n 10
typedef struct {
	char name[10];
	char num[20];
}data;

void comppr(data[], int number);

int main() {
	int count = 0;
	data A[n];
	char sen[30];
	printf("[input]\n");
	for (int i = 0; i < n; i++) {
		gets_s(sen,sizeof(sen));
		if (strcmp(sen,"quit") == 0) {
			break;
		}
		count++;
		sscanf(sen,"%s %s", A[i].name,A[i].num);
	}
	printf("\n검색할 이름을 입력하시오:\n");
	comppr(A, count);
	return 0;
}

void comppr(data A[], int number) {
	data comp;
	scanf("%s", &comp.name);
	for (int i = 0; i < number; i++) {
		if (!(strcmp(A[i].name, comp.name))) {
			printf("\n[output]\n%s의 전화번호는 %s입니다.\n", A[i].name, A[i].num);
			break;
		}
	}
}