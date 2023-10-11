#include "function_pointers.h"

/**
 * array_iterator - maps an array through a fct pointer
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
