#include "sort.h"

/*Helper function*/
void print_arr(int *array, size_t size);
void swap(int *a, int *b);
/**
* print_arr - Print an array on integers.
* @array: Pointer to array of integers.
* @size: Number of elements in array.
* Return: Nothing.
*/
void print_arr(int *array, size_t size)
{
size_t length, i = 0;
char buffer[12];
char *ptr;

for (; i < size; i++)
{
if (i > 0)
write(1, ", ", 2);

ptr = buffer + sizeof(buffer) - 1;
*ptr = '\0';

do 
{
ptr--;
*ptr = '0' + (array[i] % 10);
array[i] /= 10;
}while (array[i] != 0);
length = buffer + sizeof(buffer) - ptr - 1;
write(1, ptr, length);
}
write(1, "\n", 1);
}

/**
* swap - Swaps integers.
* @a: Points to first integer.
* @b: Points to the second integer.
* Return: Nothing
*/
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

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

for (; m < size - 1; m++)
{
for (; n < size - m - 1; n++)
{
if (array[n] > array[n + 1])
{
swap(&array[n], &array[n + 1]);
}
}
print_arr(array, size);
}
}
