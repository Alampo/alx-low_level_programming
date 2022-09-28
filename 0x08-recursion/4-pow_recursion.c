#include "main.h"

/**
  *_pow_recursion - returns the power of a number to another number
  *
  *@x: base number
  *@y: power number
  *Return: the power of the given number
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
