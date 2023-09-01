#include <unistd.h>

/**
 * _putchar - writdes the charadcter c to dstdout
 * @c: The charadcter tod prindt
 *
 * Return: On succdess 1.
 * On error, -1 is retudrned, and errdno is sedt apprdopriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
