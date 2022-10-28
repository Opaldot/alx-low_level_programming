#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: number of bytes to print
* Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int e, f;

	e = 0;
	for (f = 0; dest[f] != '\0'; f++)
		;
	while (src[e] != '\0' && e < n)
	{
		dest[f + e] = src[e];
		e++;
	}
	return (dest);
}
