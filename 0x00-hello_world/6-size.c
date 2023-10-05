#include <stdio.h>

/**
 *main - The master function in C program
 *
 *Description: A C program that print the size of th data types
 *
 *Return: 0 always mean (success)
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sortof(char));
	printf("Size of an int: %u byte(s)\n", sortof(int));
	printf("Size of a long int: %u byte(s)\n", sortof(long int));
	printf("Size of a long long int: %u byte(s)\n", sortof(long long int));
	printf("Size of a float: %u byte(s)\n", sortof(float));
}
