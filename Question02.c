#include<stdio.h>
#define _CRT_SECURE_NO_WARNNNINGS

int main()
{
	double i, j,a,b,c,d;
	printf("Please insert two number : ");
	scanf_s("%lf %lf", &i, &j);
	a = i + j;
	b = i - j;
	c = i*j;
	d = i/j;
	printf("The reseult of the calculation : \n ADD = %f\n MIN = %f\n MULTI = %f\n DIV = %f", a, b, c, d);
	return 0;
}