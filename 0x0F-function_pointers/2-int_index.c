#include "function_pointer.h"

/**
  *int_index - ssearches for an inteeger
  *@array: input integer array
  *@size: size of the array
  *@cmp: pointer to the function to be used
  *
  *Return: -1 and searched integer i
  *
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);


		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
