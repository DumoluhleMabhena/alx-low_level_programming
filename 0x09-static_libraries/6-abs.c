#include "main.h"
#include <unistd.h>
/**
 * _abs - function
 * @n: int variable
 * Return: 0 for success
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);

}
