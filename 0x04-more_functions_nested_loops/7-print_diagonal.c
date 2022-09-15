#include "main.h"

/**
  *print_diagonal - Prints a diagonal line on the screen
  *
  *@n: number of times it should be printed
  *
  *Return: No return
  *
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	_putchar('\n');
}
