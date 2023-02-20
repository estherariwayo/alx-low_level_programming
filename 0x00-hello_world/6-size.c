#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	longint c;
	lonlongint d;
	float f;
printf("size of a char: %lu byte(s)\n", (unsignedlong)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsignedlong)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsignedlong)sizeof(c));
printf("size of a long int: %lu byte(s)\n", (unsignedlong)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsignedlong)sizeof(f));
return (0);
}
