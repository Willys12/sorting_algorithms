#include "sort.h"

void exchange_values(int *first, int *second);
int partition_array(int *array, size_t size, int start, int end);
void recursive_sort(int *arr, size_t arr_size, int start, int end);
void quick_sort(int *arr, size_t arr_size);

/**
 * recursive_sort - Implement the quicksort algorithm recursively.
 * @arr: An array of integers to sort.
 * @arr_size: The size of the array.
 * @start: The starting index.
 * @end: The ending index.
 * Return: Nothing
 */
void recursive_sort(int *arr, size_t arr_size, int start, int end)
{
int partition_index;

if (end - start >   0)
{
partition_index = partition_array(arr, arr_size, start, end);
recursive_sort(arr, arr_size, start, partition_index -   1);
recursive_sort(arr, arr_size, partition_index +   1, end);
}
}

/**
 * exchange_values - Swap two integers in an array.
 * @first: The first intege.
 * @second: The second integer.
 */
void exchange_values(int *first, int *second)
{
int temp;

temp = *first;
*first = *second;
*second = temp;
}

/**
 * partition_array - Order a subset of an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @start: The starting index of the subset.
 * @end: The ending index of the subset.
 * Return: The final partition index.
 */
int partition_array(int *array, size_t size, int start, int end)
{
int *pivot, above, below;

pivot = array + end;
above = start;
below = start;

for (below = start; below < end; below++)
{
if (array[below] < *pivot)
{
if (above < below)
{
exchange_values(array + below, array + above);
print_array(array, size);
}
above++;
}
}

if (array[above] > *pivot)
{
exchange_values(array + above, pivot);
print_array(array, size);
}
return (above);
}
/**
 * quick_sort - Sort an array of integers in ascending order.
 * @arr: An array of integers.
 * @arr_size: The size of the array.
 * Return: Nothing.
 */
void quick_sort(int *arr, size_t arr_size)
{
if (arr == NULL || arr_size <   2)
{
return;
}

recursive_sort(arr, arr_size, 0, arr_size - 1);
}
