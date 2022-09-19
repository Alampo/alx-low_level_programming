#include "main.h"

/**
  *_strlen - prints length of a string
  *
  *@s: Input string
  *
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
