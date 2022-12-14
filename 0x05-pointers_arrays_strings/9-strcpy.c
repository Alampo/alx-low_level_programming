#include "main.h"

/**
  *_strcpy - copies a string into another
  *
  *@src: string to be copied
  *
  *@dest: buffer to be copied to
  *
  *Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
