#include <stdio.h>
#include "../sqrt/include/sqrt.h"
#include "../hello/include/sayHello.h"
int main()
{
	double b=25.0;
	double a=0.0;
	
	a = getSqrt(b);
	printf("\n");
	printf("**************************\n");
	printf("Testing sqrt lib:\n a is %.lf, b is %.lf\n\n", a, b);
	sayHello();
	printf("**************************\n");
	printf("\n");
	return 0;
}
