#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count thef words in a string
 * @s: string to ee
 *
 * Return: number words
 */
int count_word(char *s)
{
	int flagzz, xc, rw;

	flagzz = 0;
	rw = 0;

	for (xc = 0; s[xc] != '\0'; xc++)
	{
		if (s[xc] == ' ')
			flagzz = 0;
		else if (flagzz == 0)
		{
			flagzz = 1;
			rw++;
		}
	}

	return (rw);
}
/**
 * **strtow - splits a into words
 * @str: string t
 *
 * Return: pointer to strings (Success)
 * or (Error)
 */
char **strtow(char *str)
{
	char **matx, *tp;
	int ji, lk = 0, mlen = 0, wors, cb = 0, stat, ed;

	while (*(str + mlen))
		mlen++;
	wors = count_word(str);
	if (wors == 0)
		return (NULL);

	matx = (char **) malloc(sizeof(char *) * (wors + 1));
	if (matx == NULL)
		return (NULL);

	for (ji = 0; ji <= mlen; ji++)
	{
		if (str[ji] == ' ' || str[ji] == '\0')
		{
			if (cb)
			{
				ed =ji;
				tp = (char *) malloc(sizeof(char) * (cb + 1));
				if (tp == NULL)
					return (NULL);
				while (stat < ed)
					*tp++ = str[stat++];
				*tp = '\0';
				matx[lk] = tp - cb;
				lk++;
				cb = 0;
			}
		}
		else if (cb++ == 0)
			stat = ji;
	}

	matx[lk] = NULL;

	return (matx);
}
