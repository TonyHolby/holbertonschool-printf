#include "main.h"

/**
  * _strlen - function that returns the length of a string.
  * @s: string
  *
  * Return: the size of the string
  */

int _strlen(char *s)
{
	int strlen = 0;
	while (*s++)
		strlen++;
	return (strlen);
}
