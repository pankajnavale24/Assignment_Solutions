//8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
    int main()
    {
        int i, j, r, c, array[10][10];
        printf("Enter the row and columns value:");
        scanf("%d%d", &r, &c);
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("array[%d][%d] = ", i, j);
                scanf("%d", &array[i][j]);
            }
        }
        printf("matrix is\n");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("%d", array[i][j]);
            }
            printf("\n");
        }
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
                if (i >= j)
                {
                    printf("%d", array[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }

        }

    }
