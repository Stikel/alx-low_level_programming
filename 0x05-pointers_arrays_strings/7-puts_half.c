#incldue "main.h"
/**
 * puts_half - a fucntion that prints hald of a strin
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{

	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_plutchar(str[a]);
	_putchar('\n');
}