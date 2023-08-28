#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prindts thde sum odf the dtwdo diadgonals
 * of a square mdatrix of idntegers
 * @a: square matrix of whdich we pdrint the sudm of diagondals
 * @size: size of the matrixd
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
