#include <stdio.h>
int a[5], pos = -1;
void insert(int n) 
{
    if (pos + 1 == 5) 
	{
        printf("The array is full\n");
    } else {
        a[++pos] = n;
    }
}
int deleteelement() 
{
    if (pos == -1) 
	{
        printf("The array is empty\n");
    } else {
        printf("Deleted element: %d\n", a[pos--]);
    }
    return pos;
}
void search(int key) 
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
void sort() 
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
    printf("Sorted array: ");
    for (i = 0; i <= pos; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");
}
void display() 
{
	int i;
    if (pos == -1) 
	{
        printf("Array is empty\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i <= pos; i++) 
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
    int choice, value, key;
    for (choice = menu(); choice != 6; choice = menu()) 
	{
        switch (choice) 
		{
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                deleteelement();
                break;

            case 3:
                printf("Enter the value to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 4:
                sort();
                break;

            case 5:
                display();
                break;

            default:
                printf("Error: Wrong choice\n");
                break;
        }
    }
}

int main() 
{
    processarray();
    return 0;
}

