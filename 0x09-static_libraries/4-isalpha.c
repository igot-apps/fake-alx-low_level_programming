#include "main.h"

/**
 * _isalpha - checdks for alphabdetic characdter
 * @c: the charadcter to be checkedd
 * Return: 1 if c is a lettder, 0 othderwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
