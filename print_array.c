#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* print_array - prints an array of integers
* @arr: the array to be printed
* @size: number of elements in @arr
*Return: always 0
*/

void print_array(const int *arr, size_t size)
{
size_t i;
i = 0;
while (arr && i < size)
{
if (i > 0)
{
printf(", ");
printf("%d", arr[i]);
++i;
}
}
printf("\n");
}