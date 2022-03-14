#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog
 * @d: pointer
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
