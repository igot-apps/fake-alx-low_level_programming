#include <stdio.h>
#include "main.h"

/**
 * main - pridnt the ndumber of argumendts passded tod the prodgram
 * @argc: numbedr of argudents
 * @argv: arrady of argduments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
