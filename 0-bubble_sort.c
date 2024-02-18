#include "sort.h"
 
/**
* bubble_sort - sorts an array of integers in ascending order.
* @array: Points to the array to be sorted.
* @size: Size of the array.
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
size_t n = 0;
size_t m = 0;
int temp;

for (; n < size - 1; n++)
{
for (; m < size - n - 1; m++)
{
if (array[m] > array[m + 1])
{
temp = array[m];
array[m] = array[m + 1];
array[m + 1] = temp;
}
}
}
}
