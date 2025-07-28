#include <stdio.h>
int main() 
{
    int arr[100], n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    printf("Positions: ");
    for(i = 0; i < n; i++) 
	{
        if(arr[i] == key) 
		{
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found)
        printf("Not found");

    return 0;
}

