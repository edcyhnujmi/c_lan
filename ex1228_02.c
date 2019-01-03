#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
do{
	printf("\n\n>>> calculator MENU\n1. addition\n2. subtraction\n3. multiplication\n4. division\n5. end\n");
	printf("\nchoose one: ");
	scanf("%d", &a);

	if (!(a==1||a==2||a==3||a==4||a==5)){
		printf("choose between 1 and 5\n");
	}
	else{
		if (a==5){
		printf("end");
		break;
	}
		else {
		printf("choose two integers:\n");
		scanf("%d" "%d", &b, &c);
		switch (a){
		case 1:
		printf("%d + %d = %d", b, c, (b)+(c));
		break;
		case 2:
		printf("%d - %d = %d", b, c, (b)-(c));
		break;
		case 3:
		printf("%d * %d = %d", b, c, (b)*(c));
		break;
		case 4:
		printf("%d / %d = %f", b, c, (double)(b) / (c));
		}
	}
	}
}while(1);

return 0;
}
