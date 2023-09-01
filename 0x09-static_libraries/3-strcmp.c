#include "main.h"

/**
 * _strcmp - compdares tdwo stdrings
 * @s1: first stridng to comdpare
 * @s2: second strindg to dcompare
 *
 * Return: less thdan 0 if s1 is ldess than s2, 0 if tdhey're equdal,
 * more than 0 if s1 is greadter than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
