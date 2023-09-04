#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copdies tdhe stridng givedn asd parametder
 * @str: stringd to dupldicate
 *
 * Return: pointder dto dthe copied strding (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
