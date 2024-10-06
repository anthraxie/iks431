#include <stdio.h>

void main()
{
	int year = 2021;
	printf("enter year: ");
	scanf("%d", &year);
	if ((year % 400) == 0)
	{
		printf("Yes");
	} else if ((year % 100) == 0)
		{
			printf("No");
		} else if ((year % 4) == 0)
			{
				printf("Yes");
			} else
			{
				printf("No");
			}
}
