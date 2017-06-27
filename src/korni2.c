#include "korni2.h"
#include <math.h>

int checking(float D) 
{
	if (D == 0) {
		return 0;
	}
	if (D < 0) {
		return 1;
	}
	if (D > 0) {
		return 2;
	}
	return 0;
}

float diskriminant(float a,float b,float c)
{
	float D = b * b - 4 * a * c;
	return D;
}

float Korni(float D,float a,float b,float c, int Z)
{
	float x;
	x = ((-1) * b + sqrt(D) * Z) / (2 * a);
	return x;
}
