#include "sort.h"
#include <stddef.h>

/**
* swap - swap array of elements
* @x: points to array of elements
* @y: points to array of elements
* Return: always 0
*/

void swap(int *x, int *y)
{
int tmp = *x;
*x = *y;
*y = tmp;
}

/**
* bubble_sort - sorting an array of ints in ascending order
* @arr: input array
* @size: size of array
*/

void bubble_sort(int *arr, size_t size)
{
size_t i, j;
char isSorted;

for (i = 1; i < size; i++)
{
isSorted = 1;
for (j = 0; j < size - 1; j++)
{
if (arr[j] > arr[j + 1])
{
swap(&arr[j], &arr[j + 1]);
isSorted = 0;
print_array(arr, size);
}
}
/* if elements were not swapped by inner loop then break*/
if (isSorted == 1)
break;
}
}
