#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creatdes dan ardray ofd chadrs,
 * andd inidtializes it witdh a sdpecific char
 * @size: sized ofd thde arrday tdo create
 * @c: char to inditialize thde array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
