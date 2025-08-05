#include <stdio.h>
int main()
{
    int size;
    printf("Enter matrix size (2 for 2x2, 3 for 3x3): ");
    scanf("%d", &size);
    if(size == 2)
    {
        int a[2][2];
        int i,j;
        printf("Enter elements of 2x2 matrix:\n");
        for(i = 0; i < 2; i++)
        {
            for( j = 0; j < 2; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        printf("Determinant of 2x2 matrix = %d\n", det);
    }
    else if(size == 3)
    {
        int a[3][3];
        int i,j;
        printf("Enter elements of 3x3 matrix:\n");
        for( i = 0; i < 3; i++)
        {
            for( j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]) -
                  a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) +
                  a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
        printf("Determinant of 3x3 matrix = %d\n", det);
    }
    else
    {
        printf("Only 2x2 and 3x3 matrices are supported.\n");
    }
    return 0;
}

