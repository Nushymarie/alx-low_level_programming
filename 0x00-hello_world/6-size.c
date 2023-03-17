#include <stdio.h>
/**
 * main . A program that prints the size of computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu 1 bytes(s)\n", (unsigned long)sizeof (a));
printf("Size of a int: %lu 4 bytes(s)\n", (unsigned long)sizeof (b));
printf("Size of long int: %lu 8 byte(s)", (unsigned long)sizeof (c));
printf("Size of long long int: %lu 8 byte(s)\n", (unsigned long)sizeof (d));
peintf("Size of float: %lu 4 byte(s)\n", (unsigned long)sizeof (d));
}
