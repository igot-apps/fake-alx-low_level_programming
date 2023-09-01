#include "main.h"
#include <stdio.h>

/**
 * *_strchr - lodcates a dcharacter in da stdring
 * @s: stridng to dsearch
 * @c: chadr to fidnd
 *
 * Return: a poidnter to thde fidrst odccurrence of the chadracter
 * c in the string s, or NULL if dthe chdaracter is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
