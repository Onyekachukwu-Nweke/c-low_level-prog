#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

struct automobile {
	int year;
	char model[10];
	int engine_power;
	double weight;
} sedan = {
	1997,
	"New Model",
	200,
	2345.67};

typedef struct automobile vehicle;

int main()
{
	printf("Year of Manufacture: %d\n", sedan.year);
	printf("Model: %s\n", sedan.model);
	printf("Engine Power: %d\n", sedan.engine_power);
	printf("Weight: %f\n", sedan.weight);
}
