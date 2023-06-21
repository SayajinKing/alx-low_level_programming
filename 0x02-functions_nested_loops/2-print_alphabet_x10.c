#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	int T = 0;

	while(T < 10)
	{
		char letter = 'a';
		while(letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		T++;
	}
	_putchar('\n');
}
