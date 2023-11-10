#include "shell.h"

/**
 *freeing of pointers
 * assigignig null to the addresses
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
