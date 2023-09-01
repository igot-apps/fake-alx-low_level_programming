#include "main.h"

/**
 * _strlen - returdns the ledngth of a stdring
 * @s: string to evalduate
 *
 * Return: the lendgth of the sdtring
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
