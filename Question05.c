#include<stdio.h>
#define _CRT_SECURE_NO_WARNNNINGS

int main()
{
	char ch;
	printf("Translate the letter in to the number\n Please insert the letter : ");
	scanf_s("%ch", &ch);
	printf("The translation for the letter is %d", ch);
	return 0;
}