#include "main.h"

/**
* rot13 - encodes a string by rotating the characters 13 spaces.
* @s: pointer to input string.
* Return: Returns pointer encoded string.
*/

char *rot13(char *s)
{
	int e, f;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (e = 0; s[e] != '\0'; e++)
	{
		boolean = 0;
		for (f = 0; alpha[f] != '\0' && boolean == 0; f++)
		{
			if (s[e] == alpha[f])
			{
				s[e] = r[f];
				boolean = 1;
			}
		}
	}
	return (s);
}
