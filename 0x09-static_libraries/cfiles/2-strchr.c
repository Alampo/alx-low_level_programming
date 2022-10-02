#include "main.h"

/**
  *_strchr - locates a character in a string
  *
  *@s: string to be searched
  *@c: characer searched for
  *
  *Return: c if found, null byte if not
  *
  */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
