#include <stdio.h>

int determinant2x2matrix (int matrix[2][2])
{
    int mainLine = 0;
    int sideLine = 0;
    int determinant = 0;

    mainLine = matrix[0][0] * matrix[1][1];
    sideLine = matrix[0][1] * matrix[1][0];

    determinant = mainLine - sideLine;

    return determinant;
}

int determinant3x3matrix (int matrix[3][3])
{
    int summand1 = matrix[0][0];
    int summand2 = matrix[0][1];
    int summand3 = matrix[0][2];
    int determinant = 0;

    int sideMatrix1[2][2] = {
        {matrix[1][1], matrix[1][2]},
        {matrix[2][1], matrix[2][2]}
    };
    int sideMatrix2[2][2] = {
        {matrix[1][0], matrix[1][2]},
        {matrix[2][0], matrix[2][2]}
    };
    int sideMatrix3[2][2] = {
        {matrix[1][0], matrix[1][1]},
        {matrix[2][0], matrix[2][1]}
    };

    determinant = (summand1 * determinant2x2matrix(sideMatrix1)) - (summand2 * determinant2x2matrix(sideMatrix2)) + (summand3 * determinant2x2matrix(sideMatrix3));
    return determinant;
}

int main ()
{
    char answer;
    double x = 0;
    double y = 0;
    double z = 0;
    int det = 0;

    printf("Press y if want to solve 3x3 Augmented matrix, press n if want to solve 2x2 Augmented matrix. Type y/n\n");
    scanf("%c", &answer);
    if(answer == 'y')
    {
        int matrixAugExample3x4[3][4] = {
            {1, 2, 3, 5},
            {4, 5, 6, 8},
            {7, 8, 0, 2}};

        int deAugMatrix[3][3] = {
            {matrixAugExample3x4[0][0], matrixAugExample3x4[0][1], matrixAugExample3x4[0][2]},
            {matrixAugExample3x4[1][0], matrixAugExample3x4[1][1], matrixAugExample3x4[1][2]},
            {matrixAugExample3x4[2][0], matrixAugExample3x4[2][1], matrixAugExample3x4[2][2]}};
        

        det = determinant3x3matrix(deAugMatrix);

        int tempMatrix[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tempMatrix[i][j] = deAugMatrix[i][j];
            }
        }
        tempMatrix[0][0] = matrixAugExample3x4[0][3];
        tempMatrix[1][0] = matrixAugExample3x4[1][3];
        tempMatrix[2][0] = matrixAugExample3x4[2][3];
        x = (float)determinant3x3matrix(tempMatrix)/det;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tempMatrix[i][j] = deAugMatrix[i][j];
            }
        }
        tempMatrix[0][1] = matrixAugExample3x4[0][3];
        tempMatrix[1][1] = matrixAugExample3x4[1][3];
        tempMatrix[2][1] = matrixAugExample3x4[2][3];
        y = (float)determinant3x3matrix(tempMatrix)/det;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tempMatrix[i][j] = deAugMatrix[i][j];
            }
        }
        tempMatrix[0][2] = matrixAugExample3x4[0][3];
        tempMatrix[1][2] = matrixAugExample3x4[1][3];
        tempMatrix[2][2] = matrixAugExample3x4[2][3];
        z = (float)determinant3x3matrix(tempMatrix)/det;

        printf("x = %f\ny = %f\nz = %f\n", x, y, z);

    }
    else
    {
        int matrixAugExample2x3[2][3] = {
            {1, 2, 1},
            {5, 6, 9}};

        int deAugMatrix[2][2] = {
            {matrixAugExample2x3[0][0], matrixAugExample2x3[0][1]},
            {matrixAugExample2x3[1][0], matrixAugExample2x3[1][1]}};

        det = determinant2x2matrix(deAugMatrix);

        int tempMatrix[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                tempMatrix[i][j] = deAugMatrix[i][j];
            }
        }
        tempMatrix[0][0] = matrixAugExample2x3[0][2];
        tempMatrix[1][0] = matrixAugExample2x3[1][2];
        x = (float)determinant2x2matrix(tempMatrix)/det;


        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                tempMatrix[i][j] = deAugMatrix[i][j];
            }
        }
        tempMatrix[0][1] = matrixAugExample2x3[0][2];
        tempMatrix[1][1] = matrixAugExample2x3[1][2];
        y = (float)determinant2x2matrix(tempMatrix)/det;

        printf("x = %f\ny = %f", x, y);
    }
}