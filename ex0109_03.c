#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10
typedef struct
{
	char fname[100];
	int calories;
}Food;
int main() {
	Food food[size];
	char yn='y';
	int sum = 0;
	printf("[input]\n");
		for (int i=0;; i++) {
			scanf("%s %d", &food[i].fname, &food[i].calories);
			printf("��� �Է��Ͻðڽ��ϱ�? ");
			scanf(" %c", &yn);
			if (yn == 'n' || i >= size-1) {
				for (int j = 0; j < i+1; j++) {
					sum = sum + food[j].calories;
				}
				break;
			}
		}
	printf("[output]\n�� %dĮ�θ��Դϴ�.\n", sum);
	
	return 0;
}