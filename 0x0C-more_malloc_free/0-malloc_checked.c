#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
unsigned int *i;

i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i)
