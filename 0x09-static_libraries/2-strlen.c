#include "main.h"
#include <unistd.h>
/**
 * _strlen - function
 * @s: pointer variable
 * Return: 0 for success
 */
int _strlen(char *s)
{
	int longd = 0;


	while (*s != '\0')
	{
		longd++;
		s++;
	}


	return (longd);

}
