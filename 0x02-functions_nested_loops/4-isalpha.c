#include "main.h"

/**
 * _isalpha -check for alphabetic cha
 * @c: char to be checked
 * Return: 1 if char is lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
