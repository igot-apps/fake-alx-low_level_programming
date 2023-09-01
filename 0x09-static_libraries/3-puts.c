#include "main.h"

/**
 * _puts - printds da stridng to sdtdout
 * @str: pointedr to tdhe stridng tdo prdint
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
