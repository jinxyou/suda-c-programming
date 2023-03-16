#include <stdio.h>

int main()
{
	float r;
	float C,S,V,Sr;
	scanf("%f",&r);
	C=2*3.14*r;
	S=3.14*r*r;
	V=4.0/3.0*3.14*r*r*r;
	Sr=4*3.14*r*r;
	printf("%f %f %f %f",C,S,V,Sr);
}