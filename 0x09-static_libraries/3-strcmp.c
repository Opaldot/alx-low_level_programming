#include "main.h"

/**
* _strcmp - compares two strings, ending at the first byte that is different.
* @s1: string to be compared
* @s2: string to compare by
* Return: the difference between the first character that are not the same
*/

int _strcmp(char *s1, char *s2)
{
        int e;

        for (e = 0; s1[e] != '\0' && s2[e] != '\0' && s1[e] == s2[e]; e++)
                ;
        return (s1[e] - s2[e]);
}
