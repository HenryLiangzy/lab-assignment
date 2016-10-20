/*
	C programming lab assignment
	By Henry Liang    ID:1530003030
	Test on Visual Studio Community 2015, Windows 10 v1607
	Last modification: Oct 20, 2016
*/


#include <stdio.h>
int main()
{
	int input;
	int i, j;
	printf("Please input an integer\n");
	scanf_s("%d", &input);
	for ( i = 0; i <= input; i++)
	{
		for ( j = 0; j < i + (i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}