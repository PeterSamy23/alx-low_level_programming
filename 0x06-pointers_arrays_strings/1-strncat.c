#include "main.h"

/**
 * _strncat - a function that concatenated two strings.
 *
 * @dest: pointer to destination input
 * src: poointer to source input
 * @n: most number of bytes from @src
 *
 * Retunr: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/*
	 * src does not need to be null terminated
	 * if it contain n or more bytes
	 */
	for (i = 0; i < n && sr[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
