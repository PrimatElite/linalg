#include <stdio.h>
#include <stdlib.h>
#include "../matrix.h"


int **create_matrix(int m, int n)
{
    int **matrix = NULL;
    int i = 0, j = 0;

    /* memory allocation */
    matrix = (int**)malloc(n * sizeof(int*) + m * n * sizeof(int));
    
    if ( matrix == NULL )
    {
        printf("ERROR in file %s, func %s: \n"
               "not enouth memory! \n", __FILE__, "create_matrix");
    }
    else
    {
        /* matrix init */
        int *start = (int*)((char*)matrix + n * sizeof(int*));
        for (i = 0; i < n; i++)
        {
            matrix[i] = start + i * m;
            for (j = 0; j < m; j++)
                matrix[i][j] = 0;
        }
    }

    return matrix;
}

void print_matrix(int **matr, int m, int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", matr[i][j]);
        printf("\n");
    }
}

void destroy_matrix(int **matr)
{
    free(matr);
}
