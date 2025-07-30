#include <stdio.h>
void display(int a[], int i, int n) 
{
    if (i == n)
        return;
    printf("%d ", a[i]);
    display(a, i + 1, n);
}
int main()
{
    int a[50], n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements:\n");
    display(a, 0, n);
    return 0;
}

