#include <stdio.h>

void main()
{
	int n = 0, result = 0;
	scanf("%d", &n);
	for (int s=1, i=0; i<=n; i++) {
		s = s * 2;
		result = s;
		}
	printf("%d", result);
}
