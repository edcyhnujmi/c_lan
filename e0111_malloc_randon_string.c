/* malloc example: random string generator*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

int main()
{
	int i, n;
	char * buffer;

	printf("How long do you want the string? ");
	scanf("%d", &i);

	buffer = (char*)malloc(i + 1);
	if (buffer == NULL) exit(1);

	for (n = 0; n<i; n++)
		buffer[n] = rand() % 26 + 'a';
	buffer[i] = '\0'; ///'\0' �� ������ ���ڿ��� ó���� �� �ǰ� �ϳ����� �б� ����

	printf("Random string: %s\n", buffer);
	free(buffer);

	return 0;
}