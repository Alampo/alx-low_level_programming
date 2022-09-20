#include <stdio.h>
#include "main.h"
/**
  *print_array - prints array of integers
  *
  *@a: input array
  *@n: input integers
  *
  *Return: no return
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + 1));
		if (i != (n - 1)
		printf(", ");
	}
	printf("\n");
}
