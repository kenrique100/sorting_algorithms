#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/**
* struct listint_s - doubly linked list node
* @n: int stored in the node
* @next: pointer to the next element of the list
* @prev: pointer to the previous element of the list
*/

typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *arr, size_t size);
void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/* Sorting algorithms */
void bubble_sort(int *arr, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
#endif
