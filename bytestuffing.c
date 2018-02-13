// Sender's End

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int i;
char e, eE, f, fF;
char str1[20], str2[20];

printf("Enter Data : \n");
gets( str1 );

strcpy( str2, str1);
// now add flag and esc
// e=esc, f=flag

for( i=0; i<strlen(str1); i++)
{
        if( str1[i]=='e' )
        {
         str2[i]="eE";
        }           
        if( str1[i]='f' )
        {
         str2[i+2]='F';        
        }
}
printf("Stuffed Data : %s\n", str2);
}
