#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (isprint(letter))
		{
		putchar(letter);
		}
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (isprint(letter))
		{
		putchar(letter);
		}
	}
	return (0);
}
