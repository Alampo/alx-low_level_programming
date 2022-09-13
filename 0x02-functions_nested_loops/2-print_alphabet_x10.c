#include "main.h"
/**
  * print_alphabet_x10 - prints all lowercase alphabets 10 times
  *
  */
void print_alphabet_x10(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
