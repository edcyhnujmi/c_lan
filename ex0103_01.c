#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char scoreToGrade(int score);

int main() {
	int score;
	printf("������ �Է��ϼ��� :\n");
	scanf("%d", &score);
	printf("\n���� : %c\n", scoreToGrade(score));
	puts("");

	return 0;
}

char scoreToGrade(int score) {
	if (score >= 90)
		return 'A';
	else if (score >= 80)
		return 'B';
	else if (score >= 70)
		return 'C';
	else if (score >= 60)
		return 'D';
	else if (score < 60)
		return 'F';
	else
		return '?';
}