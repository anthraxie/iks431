
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 2
#define N 3
#define K 4

void matrixGeneration(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int A[M][K], int B[K][N], int C[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < K; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int findColumnWithMaxNegativeSum(int matrix[M][N]) {
    int maxColumn = -1;
    int maxNegativeSum = 0;

    for (int j = 0; j < N; j++) {
        int sum = 0;
        for (int i = 0; i < M; i++) {
            if (matrix[i][j] < 0) {
                sum += matrix[i][j];
            }
        }
        if (sum < maxNegativeSum || maxColumn == -1) {
            maxNegativeSum = sum;
            maxColumn = j;
        }
    }
    return maxColumn;
}

void sortColumnDecrease(int matrix[M][N], int col) {
    int temp;
    for (int i = 0; i < M-1; i++) {
        for (int j = i+1; j < M; j++) {
            if (matrix[i][col] < matrix[j][col]) {
                temp = matrix[i][col];
                matrix[i][col] = matrix[j][col];
                matrix[j][col] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int m, k;
    scanf("%d%d", m,k);
    int matrixA[m][k], matrixB[K][N], matrixD[M][N];

    matrixGeneration(M, K, matrixA);
    matrixGeneration(K, N, matrixB);
    matrixMultiplication(matrixA, matrixB, matrixD);
    
    printf("\nMatrix D = A * B):\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrixD[i][j]);
        }
        printf("\n");
    }
    
    int col = findColumnWithMaxNegativeSum(matrixD);
    if (col != -1) {
        printf("\nColumn with max negative sum: %d\n", col);
        printf("Before sorting:\n");
        for (int i = 0; i < M; i++) {
            printf("%d ", matrixD[i][col]);
        }
        printf("\n");
        
        sortColumnDecrease(matrixD, col);
        
        printf("After decrease sort:\n");
        for (int i = 0; i < M; i++) {
            printf("%d ", matrixD[i][col]);
        }
        printf("\n");
    } else {
        printf("No negative elements in the matrix.\n");
    }

    return 0;
}

