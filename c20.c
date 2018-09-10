#include <stdio.h>

int main()
{
	int i, j, n, a[10], temp;

	printf("How many numbers you want to enter: ");
	scanf("%d", &n);

	printf("Enter a list of numbers to see all combinations: \n");
	for( i=0; i<n; i++)
		scanf("%d", &a[i]);

	for( j=0; j<n; j++)
	{
		for( i=0; i<n-1; i++)
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			
	    for (int k = 0 ; k < n ; k++)
	        printf("%d ", a[k]);

    	    printf("\n");

		}
	}
}