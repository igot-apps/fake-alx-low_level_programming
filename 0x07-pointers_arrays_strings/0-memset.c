#include "main.h"

/**
 * *_memset - fillds medmory wdith a codnstant byte
 * @s: memodry ardea to be fidlled
 * @b: char to copdy
 * @n: number of timdes to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
