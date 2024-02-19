#include "sort.h" 
/**
* bubble_sort - sorts an array of integers in ascending order.
* @array: Points to the array to be sorted.
* @size: Size of the array.
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
size_t m = 0;
size_t n = 0;
bool swapped;
int temp;

if (array == NULL || size < 2)
{
return;
}

for (; n < size - 1; n++)
{
swapped = false;
for (; m < size - n - 1; m++)
{
if (array[m] > array[m + 1])
	{
	temp = array[m];
	array[m] = array[m + 1];
	array[m + 1] = temp;
	swapped = true;
	print_array(array, size);
	}
}
if (!swapped)
{
break;
}
}
}
