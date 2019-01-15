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
	printf("[input]\n�迭�� ũ�⸦ �Է��Ͻÿ�:");
	scanf("%d", &size);
	student = (STU *)malloc(sizeof(STU)*size);
	for (int i = 0; i < size; i++) {
		printf("\ndata #%d>", i + 1);
		printf("\n�̸� : ");
		scanf("%s", student[i].name);
		printf("�й� : ");
		scanf("%d", &student[i].number);
		printf("���� : ");
		scanf("%f", &student[i].grade);
	}
	printf("\n[output]\n--------------------------\n");
	dataprintf(student, size);
	printf("--------------------------\n���� ���: %.2f\n",G(student, size));
	
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
