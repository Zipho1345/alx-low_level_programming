#include "main.h"

/**
 * _abs - prints the absolute value integer.
 * @a: the integer to computes its absolute value.
 * Return:returns the abs value.
 *
 */
int_abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
