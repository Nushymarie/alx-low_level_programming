#include "main.h"
/**
  * main - main fuction
  * _putchar: print alphabets in lower case
  * return: always 0
  */


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar (i);
	_putchar('\n');
}
