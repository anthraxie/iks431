#include <stdio.h>

void main()
{
    int const n = 6;
    int A[n] = {3, 54, 78, 6, 1, 45};
    int B[n] = {98, -1, 9, 45, -88, 2};
    int C[n];

    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] + B[i];
    }

    int maxReal = -99999999;
    int negativeImaginCounter = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxReal)
        {
            maxReal = A[i];
        }
        if (B[i] < 0)
        {
            negativeImaginCounter++;
        }
    }



    int sum = 0;
    int average = 0;

    for (int i = 0; i < n; i++)
    {
        sum += C[i];
    }
    average = sum/n;



    printf("Max Real %d,  Count of negative Imagine numbers: %d", maxReal, negativeImaginCounter);

}

