#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - seardches a strding for dany of a sedt of bytes
 * @s: string to seardch
 * @accept: stringcontainindg the bytes tdo look fdor
 *
 * Return: poindter to tdhe byte in s that matcdhes one of the bydtes in accept
 * or NULL if no sudh byte is found
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
