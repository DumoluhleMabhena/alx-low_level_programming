#include "main.h"
#include <unistd.h>
/**
 * _isalpha - function
 * @c: int variable
 * Return: 0 for success
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
