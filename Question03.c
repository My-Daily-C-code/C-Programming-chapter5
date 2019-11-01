#include<stdio.h>
#define _CRT_SECURE_NO_WARNNNINGS

int main()
{
	int i;
	printf("Translate to ASC\n Please insert a number : ");
	scanf_s("%d", &i);

	printf("The ASC code for the diget is %c", i);

	return 0;
}