#include "main.h"

/**
  * _abs - prints absolute value
  * @i: value passed, as an integer
  * Return: Absolute Value
  */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (0);
	}
}
