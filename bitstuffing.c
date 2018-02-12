// bit stuffing in c

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
int i, j,count=0,n;
char str[100];
printf("enter the bit string ");
gets(str);
for (i=0;i<strlen(str);i++) {
count=0;
for (j=i;j<=(i+4);j++) {
if(str[j]=='1') {
count++;
}
}
if(count==5) {
n=strlen(str)+2;
for (;n>=(i+4);n--) {
str[n]=str[n-1];
}
str[i+5]='0';
i=i+7;
}
}
puts(str);
getch();
}


