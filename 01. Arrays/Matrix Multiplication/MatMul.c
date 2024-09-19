#include<stdio.h>
#define MAX 50

void main() {
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;
    printf("--------Matrix Multiplication--------\n");
    printf(" \n");
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &arows, &acolumns);

  
    for (i = 0; i < arows; i++) {
        for (j = 0; j < acolumns; j++) {
            printf("Enter the elements of Matrix A: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf(" \n");
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &brows, &bcolumns);

    // Matrix multiplication is only possible when the number of columns in A
    // equals the number of rows in B.
    if (brows != acolumns) {
        printf("Sorry, we cannot multiply the matrices A and B.\n");
    } else {
        for (i = 0; i < brows; i++) {
            for (j = 0; j < bcolumns; j++) {
                printf("Enter the elements of Matrix B: ");
                scanf("%d", &b[i][j]);
            }
        }

        // Initializing the product matrix with zero.
        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                product[i][j] = 0;
            }
        }

        // Performing matrix multiplication.
        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                sum = 0;
                for (k = 0; k < brows; k++) {
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
            }
        }

        printf(" \n");
        printf("Resultant Matrix:\n");
        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
}
