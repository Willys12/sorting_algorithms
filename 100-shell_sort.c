#include "sort.h"
/*Helper function*/
/**
* swap - Swaps two integers.
* @a: First element to be swapped.
* @b: Second element being swapped.
* Return: Nothing
*/
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
* shell_sort - sorts an array of integers in ascending order
*		using shell sort algorithm, Knuth sequence.
* @array: Array of integers to be sorted.
* @size: The size of the array of integers.
* Return: Nothing.
*/
void shell_sort(int *array, size_t size)
{
size_t n, m, gap;

if (array == NULL || size < 2)
{
return;
}

for (gap = size / 2; gap > 0; gap = (gap + 1) / 3)
{
n = gap;
for (; n < size; n++)
{
m = n;
while (m >= gap && array[m] < array[m - gap])
{
swap(&array[m], &array[m - gap]);

m -= gap;
}
}
print_array(array, size);
}
}
