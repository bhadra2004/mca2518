#include <stdio.h>
#define SIZE 5
int insert(int a[], int pos, int n) 
{
    if (pos == SIZE - 1) 
	{
        printf("The array is full\n");
    } else {
        a[++pos] = n;
    }
    return pos;
}
int deleteelement(int a[], int pos) 
{
    if (pos == -1) {
        printf("The array is empty\n");
    } else {
        printf("Deleted element: %d\n", a[pos--]);
    }
    return pos;
}
void search(int a[], int pos, int key) 
{
    int i, flag = 0;
    for (i = 0; i <= pos; i++) 
	{
        if (a[i] == key) 
		{
            flag = 1;
            break;
        }
    }
    if (flag == 0) 
	{
        printf("Element not found\n");
    } else 
	{
        printf("Element found at position %d\n", i);
    }
}
void sort(int a[], int pos) 
{
    int i, j, temp;
    for (i = 0; i <= pos; i++) 
	{
        for (j = i + 1; j <= pos; j++) 
		{
            if (a[i] > a[j]) 
			{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i <= pos; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");
}
void display(int a[], int pos) 
{
	int i;
    if (pos == -1) 
	{
        printf("Array is empty\n");
        return;
    }
    printf("Array elements: ");
    for ( i = 0; i <= pos; i++) 
	{
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int menu() 
{
    int choice;
    printf("\n1. INSERT\n2. DELETE\n3. SEARCH\n4. SORT\n5. DISPLAY\n6. EXIT\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}
void processarray() 
{
    int a[SIZE], pos = -1;
    int choice, value, key;
    while ((choice = menu()) != 6) 
	{
        switch (choice) 
		{
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                pos = insert(a, pos, value);
                break;
            case 2:
                pos = deleteelement(a, pos);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &key);
                search(a, pos, key);
                break;
            case 4:
                sort(a, pos);
                break;
            case 5:
                display(a, pos);
                break;
            default:
                printf("Error: Invalid choice\n");
                break;
        }
    }
}
int main() 
{
    processarray();
    return 0;
}

