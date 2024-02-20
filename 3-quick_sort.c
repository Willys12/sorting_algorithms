#include "sort.h"

/*Helper Function*/
void quick_sort_rec(int *array, size_t low, size_t high);
void swap_int(int *a, int *b);
size_t partition(int *array, size_t low, size_t high);

/**
* swap_int - Swaps two integers.
* @a: First integer being swapped.
* @b: Second integer being swapped.
* Return: Nothing
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
* partition - Partition the array around the pivot.
* @array: Array to partition.
* @low: The index of the first element in the partition.
* @high: The index of the last element in the partition.
* Return: The index of the pivot element after partitioning.
*/
size_t partition(int *array, size_t low, size_t high)
{
int p_point = array[high];
size_t n = low - 1;
size_t m = low;

if (array == NULL || low > high)
{
return (0);
}
for (; m < high; m++)
{
if (array[m] <= p_point)
{
n++;
swap_int(array + n, array + m);
print_array(array, high - low + 1);
}
}
swap_int(array + n + 1, array + high);
print_array(array, high - low + 1);

return (n + 1);
}

/**
* quick_sort - Sort an array of integers in ascending order.
* @array: The array to sort.
* @size: The number of elements in the array.
* Return: Nothing.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
quick_sort_rec(array, 0, size - 1);
}

/**
* quick_sort_rec - Recursive helper function for quick_sort.
* @array: The array to sort.
* @low: The index of the first element in the partition.
* @high: The index of the last element in the partition.
* Return: Nothing.
*/
void quick_sort_rec(int *array, size_t low, size_t high)
{
size_t piv_index;

if (array == NULL || low >= high)
{
return;
}
piv_index = partition(array, low, high);
quick_sort_rec(array, low, piv_index - 1);
quick_sort_rec(array, piv_index + 1, high);
}
