#include "main.h"

/**
 * print_alphabet -print the apohabet in lowercase
*/

void print_alphabet(void);
{
	char lettter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
