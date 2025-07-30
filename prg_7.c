#include <stdio.h>
void displayReverse(int a[], int i) 
{
    if (i < 0)
        return;
    printf("%d ", a[i]);
    displayReverse(a, i - 1);
}
int main() {
    int a[50], n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	{
	  scanf("%d", &a[i]);
    }
    printf("Array elements in reverse order:\n");
    displayReverse(a, n - 1);
    return 0;
}

