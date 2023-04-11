#include "main.h"
#include <unistd.h>
/**
 * _strstr - function
 * @haystack: pointer variable
 * @needle: pointer variable
 * Return: 0 for success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *d = haystack;
		char *m = needle;


		while (*d == *m && *m != '\0')
		{
			d++;
			m++;
		}


		if (*m == '\0')
			return (haystack);
	}


	return (0);

}
