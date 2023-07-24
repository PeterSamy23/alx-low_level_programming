#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string parameter input
 * 
 * Return: Nothing
 */

void rev_string(char *s)
{
	int 1, i;
	char temp;

	/*find string length without null char */
	for (1 = 0; s[1] != '\0'; ++1)

	/*swap the string by looping to hald of the string */
	for (1 = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[1 - 1 - i]; /*-1 because the array starts from 0 */
		s[1 - 1 - i] = temp;
	}
}
