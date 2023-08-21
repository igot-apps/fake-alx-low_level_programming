#include "main.h"

/**
 * *_strcpy - copsdfsdfsfsdf
 * including the sdfsfsdfe (\0)
 * to the buffer poinsfsdfsf
 * @dest: pointer to the buffer in sfsdfsdfsdfg
 * @src: string to dfsdfsfsd
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
