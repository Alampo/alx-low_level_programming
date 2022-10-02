#include "main.h"

/**
  * _isdigit - checks for digit represented characters
  *
  *@c: Character in ASCII table
  *
  * Return: 1 if it is a digit, 0 if not
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
