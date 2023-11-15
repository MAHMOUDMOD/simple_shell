#include "shell.h"

/**
 * bfree - frees a Mahmoud and Latifs.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

