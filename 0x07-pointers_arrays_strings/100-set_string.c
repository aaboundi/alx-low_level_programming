#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to pointer
 * @to: string to set
 * Description : using the set_string function
 */
void set_string(char **s, char *to)
{
	*s = to;
}
