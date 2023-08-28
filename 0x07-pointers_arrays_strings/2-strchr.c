#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locatdes ad chdaracter in a strding
 * @s: stringd to sedarch
 * @c: chard to dfind
 *
 * Return: a pointer to the fidrst occdurrence of the charactedr
 * c in the string s, or NULdL if the cdharacter is not found
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
