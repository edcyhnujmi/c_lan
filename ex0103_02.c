#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

int main() {
	printf("**************************************\n");
	printf("*      1. ����                       *\n");
	printf("*      2. ����                       *\n");
	printf("*      3. ����                       *\n");
	printf("*      4. ������                     *\n");
	printf("**************************************\n");
	printf("�޴��� �����ϼ���: ");
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 2 || a == 3 || a == 4) {
		printf("�� ���� �Է��ϼ��� : ");
		float b, c;
		scanf("%f %f", &b, &c);
		switch (a) {
		case 1: printf("%.2f + %.2f = %.2f\n", b, c, add(b, c));
			break;
		case 2: printf("%.2f - %.2f = %.2f\n", b, c, sub(b, c));
			break;
		case 3: printf("%.2f * %.2f = %.2f\n", b, c, mul(b, c));
			break;
		case 4: printf("%.2f / %.2f = %.2f\n", b, c, div(b, c));
			break;
		}
	}
}

float add(float b, float c){
	return(b+c);
}
float sub(float b, float c){
	return(b-c);
}
float mul(float b, float c){
	return(b*c);
}
float div(float b, float c){
	return(b/c);
}