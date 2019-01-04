/* memset example */
#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main()
{
	//strcmp, strncmp
	char str[] = "almost every programmer should know memset!";
	char str2[] = "qwerty every programmer should know memset!";
	printf("%d\n", strcmp(str, str2));
	printf("%d\n", strncmp(str, str2, 7));

	//strlen,memcpy
	char str3[50];
	int len = strlen("C is the third letter of the English alphabet.") + 1; //strlen
	memcpy(str3, "C is the third letter of the English alphabet.", len);
	printf("%s\n", str3);

	//memchr
	char *ret = memchr(str3, 't', strlen(str3));
	printf("%s\n", ret);

	//strcpy,strncpy
	char dest[80] = "Java";
	char source[80] = "C is a language.";

	printf("%s\n", strcpy(dest, source));
	printf("%s\n", dest);

	printf("%s\n", strncpy(dest, "C#", 2));
	printf("%s\n", strncpy(dest, "C#", 3));

	/* strcat example */
	char str4[80];
	strcpy(str4, "these ");
	strcat(str4, "strings ");
	strcat(str4, "are ");
	strcat(str4, "concatenated.");
	puts(str4);

	//strfun.c
	char str5[] = "abcdefghijklmnb";
	printf("%d\n", strlen("java"));
	printf("%d\n", strlen(str5));

	printf("%s\n", strupr(str5));
	printf("%s\n", str5);

	printf("%s\n", strstr(str5, "ij"));
	printf("%s\n", strchr(str5, 'B'));

	printf("문장 입력 : ");
	char str6[50];
	while (gets_s(str6,50)){}
	printf("\n");
	

	return 0;
}

void reverse(char str[])
{
	int i,j;
	char c;
	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
}