#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order.
* @array: Array to be sorted
* @size: The number of elements in array.
* Return: Nothing.
*/
void selection_sort(int *array, size_t size)
{
size_t m, n = 0;
int *val_ptr, temp;

if (array == NULL || size < 2)
{
return;
}

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
temp = array[n];
array[n] = *val_ptr;
*val_ptr = temp;

print_array(array, size);
}
}
}
