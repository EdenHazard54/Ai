#include "korni2.h"
#include <stdio.h>
#include <math.h>

int main() 
{
	float a,b,c,x,D;
	int Z;
	printf("enter digits \n");
	printf("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);
	if ((a == 0) && (b == 0)) {
		printf("kornei net! \n");
		return 0;
	}
	if (a == 0) {
		x = c * 1 / b;
		printf("x = %7.2f \n",x);
		return 0;
	}
	D = diskriminant(a,b,c);
	Z = checking(D);
	switch(Z) {
		case 0:
			x= Korni (D,a,b,c,1);
			printf("x = %7.2f \n",x);
			break;
		case 1:
			printf("Kornei HET!!!!! \n");
			break;
		case 2:
			x = Korni (D,a,b,c,1);
			printf("x = %7.2f \n", x);
			x = Korni (D,a,b,c,-1);
			printf("x = %7.2f \n", x);
			break;
	}
	return 0;
}
