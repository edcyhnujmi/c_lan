#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	int number;
	float grade;
}STU;

void dataprintf(STU student[], int size);
float G(STU student[], int size);

int main() {
	STU *student = NULL;
	int size, num;
	do {
		printf("\n>>> 메뉴 <<<\n");
		printf("1. 데이터 입력\n");
		printf("2. 데이터 출력\n");
		printf("3. 성적평균\n");
		printf("4. 종료\n");
		printf("--------------------------\n");
		printf("메뉴를 선택하시오 : ");
		scanf("%d", &num);
		if (num == 4) {
			printf("종료합니다.\n");
			break;
		}
		else if (num <= 0) {
			printf("\n1~4를 입력하시오.\n");
		}
		else if (num == 1) {
			printf("[input]\n배열의 크기를 입력하시오:");
			scanf("%d", &size);
			student = (STU *)malloc(sizeof(STU)*size);
			for (int i = 0; i < size; i++) {
				printf("\ndata #%d>", i + 1);
				printf("\n이름 : ");
				scanf("%s", student[i].name);
				printf("학번 : ");
				scanf("%d", &student[i].number);
				printf("학점 : ");
				scanf("%f", &student[i].grade);
			}
		}
		else if(num ==2){
			printf("\n[output]\n--------------------------\n");
			dataprintf(student, size);
		}
		else if (num == 3) {
			printf("--------------------------\n학점 평균: %.2f\n", G(student, size));
		}
	} while (1);
	free(student);

	return 0;
}

void dataprintf(STU student[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%s %d %.1f\n", student[i].name, student[i].number, student[i].grade);
	}
}

float G(STU student[], int size) {
	float g = 0;
	for (int i = 0; i < size; i++) {
		g = g + student[i].grade;
	}
	g = g / size;

	return g;
}