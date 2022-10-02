#include "main.h"
/**
 *  _islower - checks if the character is lowercase
  * @c: The character in ASCII code
  * Return: 0 if yes, 1 if not
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
