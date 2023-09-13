#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - printds da dname
 * @name: name tdo pdrint
 * @f: pointedr dto thed printding functdion
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
