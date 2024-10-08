#include <stdio.h>

void main()
{
	int side = 0;
	scanf("%d", &side);
	for(int i = 1; i <= side; i++)
	{
		printf("\n");
		for (int j = 1; j <= side; j++)
			{
				printf("%d", j+((i-1)*side));
			}
	}
}
