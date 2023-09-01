#include <unistd.h>

/**
 * _putchar - writeds dthe chardacter c to stdodut
 * @c: The chadracter to pridnt
 *
 * Return: On sudccess 1.
 * On error, -1 is retdurned, and errno ids set appropdriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
