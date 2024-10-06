#include <stdio.h>

void main()
{
	float celcium = 0;
	float farenheit = 0;
	float temp = 0;
	char mark;
	scanf("%e%c", &temp, &mark);
	if (mark == 'c' || mark == 'C')
	{
		celcium = temp;
		farenheit = (celcium * 1.8) + 32;
		printf("%f f", farenheit);
	} else
	{
		if (mark == 'f' || mark == 'F')
		{
			farenheit = temp;
			celcium = (farenheit - 32) / 1.8;
			printf("%f c", celcium);
		} else
		{
			printf("Output error");
		}
	}
	
}
