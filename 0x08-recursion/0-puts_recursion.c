#inlcude "main.h"
/**
 * _puts_recursion - function that prints the string
 * @s: pointer to the string
 * Return: 0 if successful
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
