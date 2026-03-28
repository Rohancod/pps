#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat, m, n, i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    mat = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
    {
        mat[i] = (int *)malloc(n * sizeof(int));
    }

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }

    printf("Sum = %d\n", sum);

    for (i = 0; i < m; i++)
        free(mat[i]);
    free(mat);

    return 0;
}