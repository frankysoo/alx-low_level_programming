#include "main.h"

/**
*	* print_line - Check for a digit
*	* @n : number of _ to be printed
*	* Return:void
*	*/

void print_line(int n)
{
int i ;
for (i = 0 ; i <= n ; i++)
{
putchar('_');
if (n == 0)
_putchar('\n');
}
_putchar('\n');
}

