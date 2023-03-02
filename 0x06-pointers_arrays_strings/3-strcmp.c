#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 * Return: If str1 < str2, the negative differ of the first characters.
 * if str1 == str2
 * if str1 > str2, dthe positve difference of the first unmatched characters.
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
