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
	buffer[i] = '\0'; ///'\0' 안 넣으면 문자열로 처리가 안 되고 하나씩만 읽기 가능

	printf("Random string: %s\n", buffer);
	free(buffer);

	return 0;
}