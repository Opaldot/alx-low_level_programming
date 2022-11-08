#include "main.h"

/**
* leet - encodes a string into leetspeek.
* @s: pointer to input string.
* Return: Returns pointer to leetspeek string.
*/

char *leet(char *s)
{
	int e, f;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	e = 0;
	for (e = 0; s[e] != '\0'; e++)
	{
		for (f = 0; subs[f] != '\0'; f++)
			if (s[f] == subs[f])
				s[e] = le[f / 2];
	}
	return (s);
}
