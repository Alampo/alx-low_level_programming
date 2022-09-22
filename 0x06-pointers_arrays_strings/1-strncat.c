#include "main.h"

/**
  *_strncat - concatenates two strings together
  *
  *@dest: string to return
  *
  *@src: string to be concatenated
  *
  *@n: number of characters
  *Return: concatenated string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int destIndex = 0, src_len = 0, i;

	while (dest[index] != '\0')
	{
		destIndex++;
	}
	while (src_len < n)
	{
		dest[destIndex] = src[src_len];
		if (src[src_len] == '\0')
			break;
		destIndex++;
		src_len++;
	}
	return (dest);
}
