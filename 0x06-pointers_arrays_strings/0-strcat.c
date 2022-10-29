i#include "main.h"

/**
* _strcat- function that link two strings.
* @dest: pointer to the destination string
* @src: pointer to the source string
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int e, f;

	e = 0;
	for (f = 0; dest[f] != '\0'; f++)
		;

	while (src[e] != '\0')
	{
		dest[f + e] = src[e];
		e++;
	}
	return (dest);
}
