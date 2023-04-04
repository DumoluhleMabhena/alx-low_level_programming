#include "main.h"
#include <unistd.h>

/**
 * this file writes the character c to stdout
 * when successful, 1 is returned
 * when unsuccessful, -1 is returned
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
