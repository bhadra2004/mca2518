#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10];
	int sum[10][10];
	int diff[10][10];
    int i, j, m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Printing sum
    printf("\nSum of the two matrices:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    // Printing difference
    printf("\nDifference of the two matrices (A - B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}

