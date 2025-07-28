#include <stdio.h>
int a[50], n;
void read() 
{
	int i;
	printf("Enter the limit of array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void disp() 
{
	int i;
    printf("The sorted arrya:\n");
    for( i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void sort() 
{
	int i,j;
    for(i = 0; i < n - 1; i++)
	 {
        for( j = i + 1; j < n; j++)
		 {
            if(a[i] > a[j]) 
			{
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    read();
    sort();
    disp();
    return 0;
}

