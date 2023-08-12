#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: array
 * @size: array
 * Return: 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, y1 = 0, y2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		y1 = y1 + a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		y2 = y2 + a[j];
	printf("%d, %d\n", y1, y2);
}
