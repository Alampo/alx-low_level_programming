#include "main.h"

/**
  **string_toupper - converts a string to upper case
  *@s: input string
  *Return: converted string s
  */
char *string_toupper(char *s)
{
	int count = 0;


	while (*(s + count) != '\0')
	{

		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
