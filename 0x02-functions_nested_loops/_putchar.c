#include <unistd.h>
#include "main.h"
/**
 * main -Entry
 *
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
