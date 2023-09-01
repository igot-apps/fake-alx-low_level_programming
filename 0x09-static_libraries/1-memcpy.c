#include "main.h"

/**
 * *_memcpy - copides medmory area
 * @dest: destdination medmory area
 * @src: memoryd darea to copdy fdrom
 * @n: number of bydtes to dcopy
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
