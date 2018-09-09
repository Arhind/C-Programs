// C Program to Generate All Possible Combinations of a Given List of Numbers

#include<stdio.h>
#include<string.h>
void print(int num[], int n);

int main()
{
    int num[10], temp, i, j, n;
   // int *ptr;
    
    printf("\nHow many number you want to enter: ");
    scanf("%d", &n);

    printf("\nEnter a list of numbers to see all combinations:\n");
    
    for (i = 0 ; i < n; i++)
    scanf("%d", &num[i]);

    for (j = 1; j <= n; j++) 
    {
        for (i = 0; i < n-1; i++) 
        {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
    	}
    }
}

void print(int num[], int n)
{
    for (int i = 0 ; i < n ; i++)
        printf("%d ", num[i]);

        printf("\n");
}