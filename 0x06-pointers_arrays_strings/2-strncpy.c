#include "main.h"

/**
* _strncpy - copies a string up to n
* @dest: Destination of the pointer to the string
* @src: Source of the pointer to the string to copy
* @n: Number of bytes to copy.
* Return: Pointer to the destination string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; src[e] != '\0' && e < n; e++)
		dest[e]	= src[e];
	while (e < n)
		dest[e++] = '\0';
	return (dest);
}
