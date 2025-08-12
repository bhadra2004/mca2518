#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100][100], temp[100];
    int n, i, j;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); 
    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++) 
	{
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }
    for(i = 0; i < n - 1; i++) 
	{
        for(j = i + 1; j < n; j++) 
		{
            if(strcmp(str[i], str[j]) > 0) 
			{
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nStrings in ascending order:\n");
    for(i = 0; i < n; i++) 
	{
        printf("%s\n", str[i]);
    }
    return 0;
}

