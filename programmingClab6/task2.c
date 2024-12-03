#include <stdio.h>
//25 exercise
//0 is positive number
int main()
{
    int leftNegative = 1;
    int rightNegative = 1;
    int leftPositive = 1;
    int rightPositive = 1;
    int parityCounter = 0;
    int x[10] = {5, -12, 59, -66, 1, -1, 99, -1, 2, -499};
    int n = 10;
    for (int i = 0; i < 10; i++)
    {
        if (i%2==0)
        {
            if (x[i]<0)
            {
                leftPositive = 0;
            }
            if (x[i]>=0)
            {
                leftNegative = 0;
            }
        }
        if (i%2==1)
        {
            if (x[i]<0)
            {
                rightPositive = 0;
            }
            if (x[i]>=0)
            {
                rightNegative = 0;
            }
        }
    }


    if ((rightPositive == leftPositive) || (rightNegative == leftNegative)) // non-alternate!
    {
        printf("Non-alternate array!");
        for (int i = 0; i < 10; i++)
        {
            if (x[i] >= 0)
            {
                x[i] = -999;
            }
        }
    }
    if ((rightNegative == leftPositive) || (leftNegative == rightPositive)) //alternate!
    {
        printf("Alternate array!");
        for (int i = 0; i < 10; i++)
        {
            if (x[i] < 0)
            {
                x[i] = -999;
            }
        }
    }


    for (int i = 0; i < 10; i++)
    {
        if (x[i]%2==1 && x[i]!=-999)
        {
            parityCounter++;
        }
    }

    printf("\n%d", parityCounter);
}
