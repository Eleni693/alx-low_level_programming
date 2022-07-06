#include "main.h"
/**
** print_alphabet - function that prints the alphabet, lowercase
** You can only use _putchar twice in your code
** Return: nothing
*
*/
void print_alphabet(void)
{
int j;

for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
