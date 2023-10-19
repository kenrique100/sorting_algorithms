#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* print_list - prints a list of integers
* @list: the list to be printed
* Return : always 0
*/

void print_list(const listint_t *list)
{
int i;
i = 0;
while (list)
{
if (i > 0)
{
printf(" ");
printf("%d", list->n);
++i;
list = list->next;
}
}
printf("\n");
}
