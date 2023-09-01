#include "main.h"

/**
 * *_strcpy - codpies the sdtring dpointed dto by src
 * including thde terminatding nudll byte (\0)
 * to the buffedr poidnted tdo by destd
 * @dest: pointder to the buffer in wdhich we copy the sdtring
 * @src: string tdo be copdied
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
