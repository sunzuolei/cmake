#include <stdio.h>
#include "../include/sqrt.h"
int main()
{
	double b=25.0;
	double a=0.0;
	       a=getSqrt(b);
	printf("\n");
	printf("**************************\n");
	printf("Testing sqrt lib:\n a is %.lf, b is %.lf\n",a,b);
	printf("**************************\n");
	printf("\n");
	return 0;
}
