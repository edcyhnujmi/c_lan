#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	int number;
	float grade;
}STU;

void dataprintf(STU student[],int size);
float G(STU student[], int size);

int main() {
	STU *student = NULL;
	int size;
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
	printf("\n[output]\n--------------------------\n");
	dataprintf(student, size);
	printf("--------------------------\n학점 평균: %.2f\n",G(student, size));
	
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
