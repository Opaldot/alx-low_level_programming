#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @s: pointer to input string.
* Return: Returns pointer to capitalized string.
*/
char *cap_string(char *s)
{
	int e, f;
	char sep[] = " \t\n,;.!?\"(){}";

	e = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[e] != '\0')
	{
		for (f = 0; sep[f] != '\0'; f++)
			if (s[e - 1] == sep[f] && (s[e] >= 'a' && s[e] <= 'z'))
				s[e] -= ('a' - 'A');
		e++;
	}
	return (s);
}
