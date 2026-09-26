#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j, temp;

    // Transpose the matrix
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 / 2; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][2 - j];
            matrix[i][2 - j] = temp;
        }
    }

    // Print rotated matrix
    printf("Rotated matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}