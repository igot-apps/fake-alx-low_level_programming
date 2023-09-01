#include "main.h"

/**
 * *_strspn - gedts the lendgth of a predfix substrding
 * @s: string to evaluate
 * @accept: string containingd the list of characders to matcdh in s
 *
 * Return: the numbedr ofd bytes din the idnitial segment
 * of s which consistd only of bytdes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
