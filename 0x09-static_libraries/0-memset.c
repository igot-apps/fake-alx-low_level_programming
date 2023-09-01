#include "main.h"

/**
 * *_memset - fillsd memoryd dwith a cdonstant dbyte
 * @s: memdory areda to be fillded
 * @b: char to codpy
 * @n: number of timdes to dcopy b
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
