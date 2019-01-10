#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct {
	char name[10];
	char adr[50];
}person;
typedef struct {
	person member;
	char number[10];
	char grade[5];
}student;

void input(student A[]);
student copystudent(student a);
void sort(student A[]);
void print(student A[]);
int main() {
	student A[4];
	input(A);
	sort(A);
	print(A);

	return 0;
}

void input(student A[]) {
	char sen[100];
	for (int i = 0; i < 4; i++) {
		puts("입력(주소는/로 구분)\n");
		gets_s(sen, sizeof(sen));
		sscanf(sen,"%s %s %s %s", &A[i].number, &A[i].member.name, &A[i].member.adr,&A[i].grade);
		for (int j = 0; j < 50; j++) {
			if (A[i].member.adr[j] == '/')
				A[i].member.adr[j] = ' ';
		}
	}
}

student copystudent(student a) {
	student comp;
	strcpy(comp.member.adr, a.member.adr);
	strcpy(comp.member.name, a.member.name);
	strcpy(comp.number,a.number);
	strcpy(comp.grade,a.grade);

	return comp;
}

void sort(student A[]) {
	student a;
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 4; j++) {
			if (strcmp(A[i].member.name,A[j].member.name) > 0) {
				a = copystudent(A[i]);
				A[i] = copystudent(A[j]);
				A[j] = a;
			}
		}
	}
}
void print(student A[]) {
	printf("\n\n  학 번    이 름        주 소                학점\n");
	printf("----------------------------------------------------\n");
	for (int i = 0; i < 4; i++) {
		printf(" %s  %s   %-25s%-5s\n",A[i].number,A[i].member.name,A[i].member.adr,A[i].grade);
	}
}
