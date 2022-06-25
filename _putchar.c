#include <unistd.h>

/**
 * _putchar - prints char to stdout
 * @c: char
 * Returns: integer >=0 if success or -1 if error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
