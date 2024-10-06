#include <stdio.h>

void main()
{
	int n = 0;
	scanf("%d", &n);
	for (int k=0, m=1; m <= n; k++, m = m * 2){
		printf("%d", k--); 
		}
}
