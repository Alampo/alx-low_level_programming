#include "main.h"

/**
  * _isupper - checks if character is Upper Case
  *
  *@c: Character on ASCII table
  *Return: 1 if true, 0 if not
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
