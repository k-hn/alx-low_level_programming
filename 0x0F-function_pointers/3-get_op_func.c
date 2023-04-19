#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - select correct function to perform operation
 *
 * @s: operation string
 *
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int count = 0;

    while (count < 5)
      {
	if (strcmp(s, ops[count].op) == 0)
	  {
	    return (ops[count].f);
	  }
	count++;
      }
    return (NULL);
}
