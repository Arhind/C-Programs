// Understanding How INT and FLOAT work

#include<stdio.h>
int main()
{
    int i,j,k,l;
    float a,b;

    scanf("%d%d", &i, &j);

    k = i/j*j;
    l = j/i*i;
    a = i/j*j;
    b = j/i*i;

    printf("%d\t%d\t%f\t%f\n", k, l, a,b);
}
