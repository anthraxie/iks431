#include <stdio.h>

void main()
{
	int a = 0;
	int result = 0;
	scanf("%d", &a);
	for (int n=a, s=0, k=0; n!=0; n=n/10){
		k=n%10;
		s=s*10+k;
		result = s;
		}
	printf("%d", result);
}
