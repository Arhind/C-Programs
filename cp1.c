// C program of Caesar Cipher

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char a[10], result, character;
int shift, i;

printf("Enter shifting value : ");
scanf("%d", &shift);
printf("Enter the plain text : ");
scanf("%s", &a);

	for ( i = 0; i < strlen(a); ++i)
	{
		if ( isupper(a[i]))
		{
		result = (int) a[i] + shift;
		character = (char) result;
		printf("%c", character);
		}
		else
		{
		result = (int) a[i] + shift;
		character = (char) result;
		printf("%c", character);
		}
	}
	printf("\n");
}