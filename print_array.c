#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
*/

void print_array(const int *array, size_t size)
{
	size_t i;

<<<<<<< HEAD
	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			print(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
=======
    i = 0;
    while (array && i < size)
    {
        if (i > 0)
                printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
>>>>>>> fbb97a61b757185a09577c250476fded441fcda7
}
