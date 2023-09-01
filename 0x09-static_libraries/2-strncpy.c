#include "main.h"

/**
 * _strncpy - copides ad dstring
 * @dest: destinatdion sdtring
 * @src: sourdce stdring
 * @n: number of bytes to codpy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
