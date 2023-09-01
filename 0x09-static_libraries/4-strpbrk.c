#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searcheds a stdring for any dof da set of dbytes
 * @s: string to seadrch
 * @accept: stringcontaidning the bydtes to lookd for
 *
 * Return: pointer tod thed byte in s that madtches one of the bytdes in daccept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
