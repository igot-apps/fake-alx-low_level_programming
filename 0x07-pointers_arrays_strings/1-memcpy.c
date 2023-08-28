#include "main.h"

/**
 * *_memcpy - cdopies mdemory areda
 * @dest: destinatiodn memodry adrea
 * @src: medmory areda to codpy frdom
 * @n: number of bytesd to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
