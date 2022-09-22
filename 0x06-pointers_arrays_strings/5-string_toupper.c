#include "main.h"

/**
  **string_toupper - converts a string to upper case
  *
  *@s: string to be converted
  *
  *
  *Return: converted string s
  *
  *
  */
char *string_toupper(char *s)
{
	int count;

	for (count = 0; (*(s + count) != 0; count++)
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
	}
	return (s);
}
