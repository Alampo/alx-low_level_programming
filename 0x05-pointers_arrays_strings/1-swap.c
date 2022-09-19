#innclude "main.h"

/**
  *swap_int - swaps the value of two integers
  *
  *@a: Input integer
  *@b: input integer
  *Return: no return
  */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
