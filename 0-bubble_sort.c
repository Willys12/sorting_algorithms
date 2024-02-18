#include "sort.h"

/*Helper function*/
void print_arr(int n);

/**
* print_arr - Prints array of integers to standard output.
* @n:Integer to print
* Return: Nothing
*/
void print_arr(int n)
{
char fgr;

if (n < 0)
{
write(1, "-", 1);
n = -n;
}
if (n / 10)
{
print_arr(n / 10);
}
fgr = (n % 10) + '0';
write(1, &fgr, 1);
}
 
/**
* bubble_sort - sorts an array of integers in ascending order.
* @array: Points to the array to be sorted.
* @size: Size of the array.
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
size_t j = 0;
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

for (; j < size; j++)
{
print_arr(array[j]);
if (j != size - 1)
{
write(1, " ", 1);
}
}
write(1, "\n", 1);
}
}
}
}
