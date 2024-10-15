#include <stdio.h>
#include <math.h>

int main()
{
    int number = 0;
    int powed = 0;
    int result = 0;
    scanf("%d", &number);
    for(int i = 0; i <= 16; i++)
        {
            powed = pow(2, i);
            if ((number & powed) != 0)
                {
                    return i;
                }
        }
}
