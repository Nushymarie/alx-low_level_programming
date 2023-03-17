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
printf("Size of a char: %d 1 bytes(s)", sizeof(char));
printf("Size of a int: %d 4 bytes(s)", sizeof(int));
printf("Size of a long int: %d 4 byte(s)", sizeof(long int));
printf("Size of a long long int: %d 8 byte(s)", sizeof(long long int));
printf("Size of a float: %d 4 byte(s)", sizeof(float));
return (0)
}
