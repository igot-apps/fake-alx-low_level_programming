#include <unistd.h>

/**
 * _putchar - writesds thddsde vvsdcharacter cds to ssdsdftdout
 * @c: The charascdfdfterfdto sprint
 *
 * Return: On success 1.
 * On error, -1 is returned, and errnoc is set cvvappropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
