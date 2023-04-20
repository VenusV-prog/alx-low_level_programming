#include <stdio.h>

/**
 * main - Prints the size of various types on
 * the computer it is compiled and run on.
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("size of an int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long int));
       	printf("Size of long long: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));

	return (0);

}

