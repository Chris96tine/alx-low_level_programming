#include "main.h"
/**
 * print_square - entry point
 *
 * Description: print square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

