#include "main.h"
#include <unistd.h>
/**
 * _putchar function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

