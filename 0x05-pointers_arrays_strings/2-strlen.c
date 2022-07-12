#include "main.h"
/**
** _strlen - check the code.
** @s: integer1
** Return: Always 0.
**/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
