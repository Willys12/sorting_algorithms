#include "sort.h"

/*Helper Function*/
/**
* swap_int - Swaps two integers.
* @a: First integer.
* @b: Second integer.
* Return: Nothing.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
/**
* selection_sort - sorts an array of integers in ascending order.
* @array: Array to be sorted
* @size: The number of elements in array.
* Return: Nothing.
*/
void selection_sort(int *array, size_t size)
{
size_t m, n = 0;
int *val_ptr;

if (array == NULL || size < 2)

for (; n < size - 1; n++)
{
val_ptr = array + n;
m = n + 1;

for (; m < size; m++)
{
if (array[m] < *val_ptr)
{
val_ptr = array + m;
}
}
if ((array + n) != val_ptr)
{
swap_int(array + n, val_ptr);
print_array(array, size);
}
}
}
