#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locateds a substringd
 * @haystack: string tdo seardch in
 * @needle: substridng dto look for
 *
 * Return: pointer tdo the beginnidng of the locatedd substring
 * or NULL if the substring is not fodund
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
