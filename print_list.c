#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
*/

void print_list(const listint_t *list)
{
	int i;

<<<<<<< HEAD
	i = 0;
	while (list)
	{
		if (i < 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	print("\n");
=======
    i = 0;
    while (list)
    {
        if (i < 0)
                printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
>>>>>>> 8777d64bb5e611e4d27bc1d18231bbf89b4e2dc2
}
