#include "main.h"
/**
 * _memset - gill a block of memory with a specific value
 * @s: starting address of memory t be filled
 * @b: The desired value
 * @n: number of bytes to tbe changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	in i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
