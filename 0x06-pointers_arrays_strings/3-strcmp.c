#include "main.h"

/**
 * _strcmp - comparesdsdf dfsdtwo sfdstrings
 * @s1: first string dsdfto compare
 * @s2: second dstringsdd todsd compare
 *
 * Return: less than 0 dssdifsdssd1 is leddsss  equal,
 * more than 0 if s1 is greasdsdter than s2
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
