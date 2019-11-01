#include<stdio.h>
#define _CRT_SECURE_NO_WARNNNINGS

int main()
{
	int a, b, c, d, area;
	printf("Insert the section for the left code : ");
	scanf_s("%d %d", &a, &b);

	printf("Insert the section for the right code : ");
	scanf_s("%d %d", &c, &d);

	area = (b - a)*(d - c);
	printf("The length of the sequre is %d", area);
	return 0;

}