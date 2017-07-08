#include <stdio.h>
#include "sqrt.h"
#include "sayHello.h"
int main()
{
	double b=25.0;
	double a=0.0;
	       a=getSqrt(b);
	printf("\n");
	printf("**************************\n");
	printf("I am demo d of MPIG0024:\na is %.lf, b is %.lf\n",a,b);
	sayHello();
	printf("**************************\n");
	printf("\n");
	return 0;
}
